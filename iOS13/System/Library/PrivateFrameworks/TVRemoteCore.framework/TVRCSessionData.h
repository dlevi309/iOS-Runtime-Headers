/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSDate, NSString;

@interface TVRCSessionData : NSObject {

	BOOL _usedRTI;
	BOOL _usedSiri;
	BOOL _requiredPairing;
	BOOL _directionalControlsEnabled;
	NSDate* _sessionStartTime;
	NSString* _launchContextDesc;

}

@property (nonatomic,retain) NSDate * sessionStartTime;                    //@synthesize sessionStartTime=_sessionStartTime - In the implementation block
@property (assign,nonatomic) BOOL usedRTI;                                 //@synthesize usedRTI=_usedRTI - In the implementation block
@property (assign,nonatomic) BOOL usedSiri;                                //@synthesize usedSiri=_usedSiri - In the implementation block
@property (assign,nonatomic) BOOL requiredPairing;                         //@synthesize requiredPairing=_requiredPairing - In the implementation block
@property (assign,nonatomic) BOOL directionalControlsEnabled;              //@synthesize directionalControlsEnabled=_directionalControlsEnabled - In the implementation block
@property (nonatomic,copy) NSString * launchContextDesc;                   //@synthesize launchContextDesc=_launchContextDesc - In the implementation block
-(NSDate *)sessionStartTime;
-(void)setSessionStartTime:(NSDate *)arg1 ;
-(void)setLaunchContextDesc:(NSString *)arg1 ;
-(NSString *)launchContextDesc;
-(void)setDirectionalControlsEnabled:(BOOL)arg1 ;
-(void)setUsedRTI:(BOOL)arg1 ;
-(void)setRequiredPairing:(BOOL)arg1 ;
-(void)setUsedSiri:(BOOL)arg1 ;
-(BOOL)usedRTI;
-(BOOL)usedSiri;
-(BOOL)requiredPairing;
-(BOOL)directionalControlsEnabled;
@end

