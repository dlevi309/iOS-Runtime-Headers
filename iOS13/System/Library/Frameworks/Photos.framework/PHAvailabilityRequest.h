/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PLTrackableRequest.h>

@protocol PLTrackableRequestDelegate;
@class NSXPCConnection, NSString, PLPhotoLibrary, NSManagedObjectID;

@interface PHAvailabilityRequest : NSObject <PLTrackableRequest> {

	AB _isCancelled;
	PLPhotoLibrary* _photoLibrary;
	id<PLTrackableRequestDelegate> _delegate;
	NSManagedObjectID* _assetObjectID;
	NSString* _taskIdentifier;
	unsigned long long _signpostID;
	NSXPCConnection* _clientConnection;

}

@property (nonatomic,readonly) NSManagedObjectID * assetObjectID;              //@synthesize assetObjectID=_assetObjectID - In the implementation block
@property (nonatomic,copy,readonly) NSString * taskIdentifier;                 //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long signpostID;                    //@synthesize signpostID=_signpostID - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain) NSXPCConnection * clientConnection;               //@synthesize clientConnection=_clientConnection - In the implementation block
@property (__weak) id<PLTrackableRequestDelegate> delegate; 
-(id)description;
-(id<PLTrackableRequestDelegate>)delegate;
-(void)setDelegate:(id<PLTrackableRequestDelegate>)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
-(NSString *)taskIdentifier;
-(unsigned long long)signpostID;
-(void)setSignpostID:(unsigned long long)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(void)runDaemonSide;
-(NSXPCConnection *)clientConnection;
-(void)setClientConnection:(NSXPCConnection *)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2 ;
-(id)plistDictionary;
-(NSManagedObjectID *)assetObjectID;
-(void)abortClientSide;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 ;
@end

