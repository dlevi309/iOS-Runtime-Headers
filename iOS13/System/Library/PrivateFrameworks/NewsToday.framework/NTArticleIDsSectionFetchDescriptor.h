/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionFetchDescriptor.h>

@protocol NTSectionFetchDescriptor;
@class NSString;

@interface NTArticleIDsSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor> {

	id<NTSectionFetchDescriptor> _privateFetchDescriptor;

}

@property (nonatomic,copy) id<NTSectionFetchDescriptor> privateFetchDescriptor;              //@synthesize privateFetchDescriptor=_privateFetchDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg1 ;
-(id)assembleResultsWithCatchUpOperation:(id)arg1 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3 ;
-(id)initWithArticleIDsConfiguration:(id)arg1 ;
-(id<NTSectionFetchDescriptor>)privateFetchDescriptor;
-(void)setPrivateFetchDescriptor:(id<NTSectionFetchDescriptor>)arg1 ;
@end

