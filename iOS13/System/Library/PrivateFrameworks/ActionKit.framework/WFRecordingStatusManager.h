/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class SBSStatusBarStyleOverridesAssertion;

@interface WFRecordingStatusManager : NSObject {

	SBSStatusBarStyleOverridesAssertion* _assertion;

}

@property (nonatomic,retain) SBSStatusBarStyleOverridesAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (assign,getter=isRecording,nonatomic) BOOL recording; 
+(id)sharedManager;
-(SBSStatusBarStyleOverridesAssertion *)assertion;
-(void)setAssertion:(SBSStatusBarStyleOverridesAssertion *)arg1 ;
-(void)acquireAssertion;
-(BOOL)isRecording;
-(void)setRecording:(BOOL)arg1 ;
-(void)invalidateAssertion;
@end

