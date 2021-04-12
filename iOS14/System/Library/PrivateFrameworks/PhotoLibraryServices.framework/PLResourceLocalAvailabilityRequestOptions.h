/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString;

@interface PLResourceLocalAvailabilityRequestOptions : NSObject {

	BOOL _networkAccessAllowed;
	BOOL _wantsProgress;
	BOOL _transient;
	NSString* _taskIdentifier;
	/*^block*/id _dataHandler;
	NSString* _clientBundleID;
	unsigned long long _downloadIntent;

}

@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (nonatomic,copy) NSString * taskIdentifier;                                              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (assign,nonatomic) BOOL wantsProgress;                                                   //@synthesize wantsProgress=_wantsProgress - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                                    //@synthesize transient=_transient - In the implementation block
@property (nonatomic,copy) id dataHandler;                                                         //@synthesize dataHandler=_dataHandler - In the implementation block
@property (nonatomic,copy) NSString * clientBundleID;                                              //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (assign,nonatomic) unsigned long long downloadIntent;                                    //@synthesize downloadIntent=_downloadIntent - In the implementation block
@property (nonatomic,readonly) BOOL shouldPrioritize; 
-(NSString *)clientBundleID;
-(void)setTransient:(BOOL)arg1 ;
-(void)setDownloadIntent:(unsigned long long)arg1 ;
-(BOOL)isTransient;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(id)dataHandler;
-(void)setDataHandler:(id)arg1 ;
-(unsigned long long)downloadIntent;
-(void)setClientBundleID:(NSString *)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(NSString *)taskIdentifier;
-(BOOL)isNetworkAccessAllowed;
-(BOOL)wantsProgress;
-(void)setWantsProgress:(BOOL)arg1 ;
-(BOOL)shouldPrioritize;
@end

