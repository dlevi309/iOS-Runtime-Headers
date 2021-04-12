/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/


@class NSString, NSArray;

@interface HRElectrocardiogramResultViewItem : NSObject {

	NSString* _badge;
	NSString* _title;
	NSString* _numberedTitle;
	NSString* _visibleBodyText;
	NSString* _videoPath;
	NSArray* _expandedContentItems;

}

@property (nonatomic,copy,readonly) NSString * badge;                        //@synthesize badge=_badge - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * numberedTitle;                //@synthesize numberedTitle=_numberedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * visibleBodyText;              //@synthesize visibleBodyText=_visibleBodyText - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoPath;                    //@synthesize videoPath=_videoPath - In the implementation block
@property (nonatomic,readonly) NSArray * expandedContentItems;               //@synthesize expandedContentItems=_expandedContentItems - In the implementation block
+(id)_makeItemForSinusRhythmAlgorithmVersionOne;
+(id)_makeItemForAtrialFibrillationAlgorithmVersionOne;
+(id)_makeItemForHighOrLowAbove120Below50AlgorithmVersionOne;
+(id)_makeItemForInconclusiveAlgorithmVersionOneWithLearnMoreDelegate:(id)arg1 ;
+(id)viewItemWithClassification:(unsigned long long)arg1 forAlgorithmVersion:(long long)arg2 learnMoreDelegate:(id)arg3 ;
+(id)viewItemWithClassification:(unsigned long long)arg1 forAlgorithmVersion:(long long)arg2 upgradingFromAlgorithmVersion:(long long)arg3 learnMoreDelegate:(id)arg4 ;
-(NSString *)badge;
-(NSString *)videoPath;
-(NSString *)title;
-(NSString *)numberedTitle;
-(NSArray *)expandedContentItems;
-(NSString *)visibleBodyText;
-(id)initWithBadge:(id)arg1 title:(id)arg2 numberedTitle:(id)arg3 visibleBodyText:(id)arg4 videoPath:(id)arg5 expandedContentItems:(id)arg6 ;
@end

