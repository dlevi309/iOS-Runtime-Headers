/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSString;

@interface PGMeaningPublicEventCriteria : NSObject <PGMeaningCriteria> {

	NSString* _publicEventCategory;
	NSString* _publicEventCategoryNameString;

}

@property (nonatomic,retain) NSString * publicEventCategoryNameString;              //@synthesize publicEventCategoryNameString=_publicEventCategoryNameString - In the implementation block
@property (nonatomic,retain) NSString * publicEventCategory;                        //@synthesize publicEventCategory=_publicEventCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
+(id)_publicEventCategoryForPublicEventCategoryName:(id)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(BOOL)passesForMomentNode:(id)arg1 ;
-(void)setPublicEventCategory:(NSString *)arg1 ;
-(void)setPublicEventCategoryNameString:(NSString *)arg1 ;
-(NSString *)publicEventCategory;
-(NSString *)publicEventCategoryNameString;
@end

