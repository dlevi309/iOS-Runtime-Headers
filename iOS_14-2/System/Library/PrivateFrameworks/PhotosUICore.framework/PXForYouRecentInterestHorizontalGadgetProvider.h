/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXHorizontalCollectionGadgetProvider.h>
#import <libobjc.A.dylib/PXForYouRankable.h>

@class NSDate;

@interface PXForYouRecentInterestHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable> {

	NSDate* _cachedPriorityDate;

}

@property (nonatomic,retain) NSDate * cachedPriorityDate;                  //@synthesize cachedPriorityDate=_cachedPriorityDate - In the implementation block
@property (nonatomic,readonly) NSDate * priorityDate; 
@property (nonatomic,readonly) long long defaultPriority; 
@property (nonatomic,readonly) long long priorityType; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
-(NSDate *)priorityDate;
-(void)resetPriorityDate;
-(long long)defaultPriority;
-(long long)priorityType;
-(id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2 ;
-(NSDate *)cachedPriorityDate;
-(void)setCachedPriorityDate:(NSDate *)arg1 ;
-(BOOL)supportsDynamicRanking;
@end

