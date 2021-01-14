/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class SBSStatusBarStyleOverridesAssertion;

@interface WFRecordingStatusManager : NSObject {

	SBSStatusBarStyleOverridesAssertion* _assertion;

}

@property (nonatomic,retain) SBSStatusBarStyleOverridesAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (assign,getter=isRecording,nonatomic) BOOL recording; 
+(id)sharedManager;
-(BOOL)isRecording;
-(void)setRecording:(BOOL)arg1 ;
-(void)setAssertion:(SBSStatusBarStyleOverridesAssertion *)arg1 ;
-(SBSStatusBarStyleOverridesAssertion *)assertion;
-(void)acquireAssertion;
-(void)invalidateAssertion;
@end

