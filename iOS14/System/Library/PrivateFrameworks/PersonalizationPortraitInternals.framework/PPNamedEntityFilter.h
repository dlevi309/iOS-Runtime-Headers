/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class MLModel;

@interface PPNamedEntityFilter : NSObject {

	MLModel* _model;

}
-(id)filterScoredNamedEntities:(id)arg1 ;
-(id)init;
-(id)filterNamedEntityRecords:(id)arg1 ;
-(BOOL)isAcceptableRecord:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
@end

