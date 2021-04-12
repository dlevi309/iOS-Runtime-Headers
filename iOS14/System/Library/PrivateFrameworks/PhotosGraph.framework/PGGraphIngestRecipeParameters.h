/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSArray;

@interface PGGraphIngestRecipeParameters : NSObject {

	NSArray* _momentsToIngest;
	NSArray* _highligthsToIngest;
	NSArray* _preProcessors;
	NSArray* _postProcessors;

}

@property (nonatomic,retain) NSArray * momentsToIngest;                 //@synthesize momentsToIngest=_momentsToIngest - In the implementation block
@property (nonatomic,retain) NSArray * highligthsToIngest;              //@synthesize highligthsToIngest=_highligthsToIngest - In the implementation block
@property (nonatomic,retain) NSArray * preProcessors;                   //@synthesize preProcessors=_preProcessors - In the implementation block
@property (nonatomic,retain) NSArray * postProcessors;                  //@synthesize postProcessors=_postProcessors - In the implementation block
+(id)lighweightGraphIngestParameters;
-(NSArray *)momentsToIngest;
-(NSArray *)postProcessors;
-(NSArray *)highligthsToIngest;
-(NSArray *)preProcessors;
-(void)setMomentsToIngest:(NSArray *)arg1 ;
-(void)setHighligthsToIngest:(NSArray *)arg1 ;
-(void)setPreProcessors:(NSArray *)arg1 ;
-(void)setPostProcessors:(NSArray *)arg1 ;
@end

