/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXVideoAdProviding <SXVideoProviding>
@property (nonatomic,readonly) unsigned long long skipThreshold; 
@property (nonatomic,readonly) BOOL hasAction; 
@required
-(BOOL)hasAction;
-(unsigned long long)skipThreshold;
-(void)presentPrivacyStatement;
-(void)skipped;
-(void)presentAction;
-(void)nextVideoStartPlaying;

@end

