/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)usedRTI;
-(void)setUsedRTI:(BOOL)arg1 ;
-(BOOL)usedSiri;
-(void)setUsedSiri:(BOOL)arg1 ;
-(BOOL)requiredPairing;
-(void)setRequiredPairing:(BOOL)arg1 ;
-(BOOL)directionalControlsEnabled;
-(void)setDirectionalControlsEnabled:(BOOL)arg1 ;
-(NSString *)launchContextDesc;
-(void)setLaunchContextDesc:(NSString *)arg1 ;
@end

