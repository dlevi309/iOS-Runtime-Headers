/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSDictionary, NSArray;

@interface PGGraphPortraitKnowledgeToDonate : NSObject {

	NSDictionary* _topics;
	NSArray* _namedEntities;
	NSArray* _locationNamedEntities;

}

@property (nonatomic,readonly) NSDictionary * topics;                        //@synthesize topics=_topics - In the implementation block
@property (nonatomic,readonly) NSArray * namedEntities;                      //@synthesize namedEntities=_namedEntities - In the implementation block
@property (nonatomic,readonly) NSArray * locationNamedEntities;              //@synthesize locationNamedEntities=_locationNamedEntities - In the implementation block
-(NSDictionary *)topics;
-(NSArray *)namedEntities;
-(id)initWithTopics:(id)arg1 namedEntities:(id)arg2 locationNamedEntities:(id)arg3 ;
-(NSArray *)locationNamedEntities;
@end

