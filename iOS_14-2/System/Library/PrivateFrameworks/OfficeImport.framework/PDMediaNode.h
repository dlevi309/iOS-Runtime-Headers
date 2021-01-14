/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTarget:(id)arg1 ;
-(void)setVolume:(long long)arg1 ;
-(id)init;
-(id)target;
-(void)setIsMuted:(BOOL)arg1 ;
-(long long)volume;
-(BOOL)isMuted;
-(void)setIsShowWhenStopped:(BOOL)arg1 ;
-(void)setNumberOfSlides:(long long)arg1 ;
-(BOOL)isShowWhenStopped;
-(long long)numberOfSlides;
@end

