/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHResourceAvailabilityRequest.h>

@class PHResourceAvailabilityDataStoreManager;

@interface PHResourceAvailabilityChangeRequest : PHResourceAvailabilityRequest {

	os_unfair_lock_s _lock;
	PHResourceAvailabilityDataStoreManager* _dataStoreManager;
	BOOL _wantsProgress;
	BOOL _transient;
	BOOL _networkAccessAllowed;

}

@property (assign,nonatomic) BOOL wantsProgress;                                                   //@synthesize wantsProgress=_wantsProgress - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                                    //@synthesize transient=_transient - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
-(void)cancel;
-(BOOL)isTransient;
-(void)setTransient:(BOOL)arg1 ;
-(void)setWantsProgress:(BOOL)arg1 ;
-(BOOL)wantsProgress;
-(BOOL)isNetworkAccessAllowed;
-(void)runDaemonSide;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2 ;
-(id)plistDictionary;
-(void)abortClientSide;
-(void)_cplDownloadStatusNotification:(id)arg1 ;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 resourceIdentity:(id)arg3 ;
-(BOOL)_prepareForChangeRequestWithLibrary:(id)arg1 asset:(id*)arg2 resource:(id*)arg3 error:(id*)arg4 ;
-(id)_availabilityRequestOptions;
-(void)_handleLocalAvailabilityChangeForResource:(id)arg1 mutableInfo:(id)arg2 fileURL:(id*)arg3 uti:(id*)arg4 orientation:(unsigned*)arg5 data:(id*)arg6 ;
-(void)_cplDownloadFinishedNotification:(id)arg1 ;
-(void)_assetsdClientXPCConnectionInterruptedNotification:(id)arg1 ;
@end

