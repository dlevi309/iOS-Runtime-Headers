/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXHorizontalCollectionGadgetProvider.h>
#import <libobjc.A.dylib/PXForYouRankable.h>

@class NSDate, PXSurveyQuestionsGadgetProvider;

@interface PXSurveyQuestionsHorizontalCollectionGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable> {

	NSDate* _cachedPriorityDate;
	PXSurveyQuestionsGadgetProvider* _gadgetProvder;

}

@property (nonatomic,retain) NSDate * cachedPriorityDate;                                  //@synthesize cachedPriorityDate=_cachedPriorityDate - In the implementation block
@property (nonatomic,retain) PXSurveyQuestionsGadgetProvider * gadgetProvder;              //@synthesize gadgetProvder=_gadgetProvder - In the implementation block
@property (nonatomic,readonly) NSDate * priorityDate; 
@property (nonatomic,readonly) long long defaultPriority; 
@property (nonatomic,readonly) long long priorityType; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
-(unsigned long long)gadgetType;
-(NSDate *)priorityDate;
-(void)resetPriorityDate;
-(long long)defaultPriority;
-(long long)priorityType;
-(id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2 ;
-(NSDate *)cachedPriorityDate;
-(void)setCachedPriorityDate:(NSDate *)arg1 ;
-(BOOL)supportsDynamicRanking;
-(PXSurveyQuestionsGadgetProvider *)gadgetProvder;
-(void)setGadgetProvder:(PXSurveyQuestionsGadgetProvider *)arg1 ;
@end

