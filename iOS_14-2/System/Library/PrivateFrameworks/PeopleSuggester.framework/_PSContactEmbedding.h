/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class MLModel;

@interface _PSContactEmbedding : NSObject {

	MLModel* _model;

}

@property (nonatomic,readonly) MLModel * model;              //@synthesize model=_model - In the implementation block
-(MLModel *)model;
-(id)init;
-(id)getEmbeddingFromFeatureDict:(id)arg1 ;
-(id)convertToNSArrayFromMLMultiArray:(id)arg1 ;
-(id)getEmbeddingForContact:(id)arg1 ;
-(id)getEmbeddingsForContacts:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
@end

