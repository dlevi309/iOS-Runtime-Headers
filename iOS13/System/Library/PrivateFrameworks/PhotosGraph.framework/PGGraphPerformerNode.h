/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphPortraitNamedEntity.h>

@class PPNamedEntity, NSString;

@interface PGGraphPerformerNode : PGGraphNode <PGGraphPortraitNamedEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PPNamedEntity * pg_namedEntity; 
@property (nonatomic,readonly) NSString * name; 
-(NSString *)name;
-(PPNamedEntity *)pg_namedEntity;
@end

