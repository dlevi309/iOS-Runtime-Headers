/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>

@interface PXForYouFooterGadgetProvider : PXGadgetProvider {

	BOOL _attemptedToGenerateGadgets;
	long long _footerState;

}

@property (assign,nonatomic) long long footerState;                        //@synthesize footerState=_footerState - In the implementation block
@property (assign,nonatomic) BOOL attemptedToGenerateGadgets;              //@synthesize attemptedToGenerateGadgets=_attemptedToGenerateGadgets - In the implementation block
-(void)generateGadgets;
-(void)setFooterState:(long long)arg1 ;
-(id)_peaceMemoryFetchOptions;
-(BOOL)_didProcessContentOvernight;
-(long long)footerState;
-(void)_handleFaceProgressCompletionWithCountDictionary:(id)arg1 ;
-(void)_handleSceneProgressCompletionWithCount:(unsigned long long)arg1 ;
-(void)_generateFooterGadget;
-(BOOL)attemptedToGenerateGadgets;
-(void)setAttemptedToGenerateGadgets:(BOOL)arg1 ;
-(void)loadDataForGadgets;
-(unsigned long long)estimatedNumberOfGadgets;
@end

