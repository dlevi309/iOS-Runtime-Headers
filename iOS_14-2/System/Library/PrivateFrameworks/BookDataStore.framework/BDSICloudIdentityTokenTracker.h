/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSURL, BDSICloudIdentityToken, NSObject;

@interface BDSICloudIdentityTokenTracker : NSObject {

	BOOL _trackLiverpool;
	NSMutableDictionary* _plistContents;
	NSURL* _plistURL;
	BDSICloudIdentityToken* _currentToken;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSMutableDictionary * plistContents;                     //@synthesize plistContents=_plistContents - In the implementation block
@property (nonatomic,retain) NSURL * plistURL;                                        //@synthesize plistURL=_plistURL - In the implementation block
@property (nonatomic,retain) BDSICloudIdentityToken * currentToken;                   //@synthesize currentToken=_currentToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL trackLiverpool;                                     //@synthesize trackLiverpool=_trackLiverpool - In the implementation block
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSURL *)plistURL;
-(BDSICloudIdentityToken *)currentToken;
-(void)setCurrentToken:(BDSICloudIdentityToken *)arg1 ;
-(BOOL)trackLiverpool;
-(NSMutableDictionary *)plistContents;
-(id)initWithContainerURL:(id)arg1 trackingLiverpool:(BOOL)arg2 ;
-(void)fetchCurrentToken;
-(void)forceUpdateTokenWithString:(id)arg1 ;
-(BOOL)didUnacknowledgediCloudLogoutOccur;
-(void)acknowledgeiCloudIdentity;
-(void)setPlistContents:(NSMutableDictionary *)arg1 ;
-(void)setPlistURL:(NSURL *)arg1 ;
-(void)setTrackLiverpool:(BOOL)arg1 ;
@end

