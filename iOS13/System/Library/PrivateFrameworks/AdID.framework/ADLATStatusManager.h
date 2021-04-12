/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
*/

#import <AdCore/ADSingleton.h>

@class NSNumber;

@interface ADLATStatusManager : ADSingleton {

	BOOL _sendingLATToAdPlatforms;
	BOOL _sendingLATToJingle;
	NSNumber* _pendingJingleRequestToken;

}

@property (nonatomic,copy) NSNumber * pendingJingleRequestToken;              //@synthesize pendingJingleRequestToken=_pendingJingleRequestToken - In the implementation block
@property (assign,nonatomic) BOOL sendingLATToAdPlatforms;                    //@synthesize sendingLATToAdPlatforms=_sendingLATToAdPlatforms - In the implementation block
@property (assign,nonatomic) BOOL sendingLATToJingle;                         //@synthesize sendingLATToJingle=_sendingLATToJingle - In the implementation block
+(id)sharedInstance;
-(void)sendLATStatusToAdPlatforms:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendLATStatusToJingle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSendingLATToAdPlatforms:(BOOL)arg1 ;
-(BOOL)sendingLATToJingle;
-(id)handleJingleOptOutResponse:(id)arg1 ;
-(BOOL)sendingLATToAdPlatforms;
-(void)setSendingLATToJingle:(BOOL)arg1 ;
-(NSNumber *)pendingJingleRequestToken;
-(void)setPendingJingleRequestToken:(NSNumber *)arg1 ;
@end

