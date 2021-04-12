/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BDSICloudIdentityToken *)currentToken;
-(NSURL *)plistURL;
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

