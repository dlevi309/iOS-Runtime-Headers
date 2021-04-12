/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDTimeNode.h>

@class PDAnimationTarget;

@interface PDMediaNode : PDTimeNode {

	PDAnimationTarget* mTarget;
	BOOL mIsMuted;
	BOOL mIsShowWhenStopped;
	long long mNumberOfSlides;
	long long mVolume;

}
-(id)init;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(long long)volume;
-(void)setVolume:(long long)arg1 ;
-(void)setIsMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)setIsShowWhenStopped:(BOOL)arg1 ;
-(void)setNumberOfSlides:(long long)arg1 ;
-(BOOL)isShowWhenStopped;
-(long long)numberOfSlides;
@end

