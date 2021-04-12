/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)preProcessors;
-(NSArray *)postProcessors;
-(NSArray *)momentsToIngest;
-(void)setMomentsToIngest:(NSArray *)arg1 ;
-(NSArray *)highligthsToIngest;
-(void)setHighligthsToIngest:(NSArray *)arg1 ;
-(void)setPreProcessors:(NSArray *)arg1 ;
-(void)setPostProcessors:(NSArray *)arg1 ;
@end

