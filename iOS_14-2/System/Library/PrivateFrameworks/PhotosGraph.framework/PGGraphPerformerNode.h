/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphPortraitNamedEntity.h>

@class PPNamedEntity, NSString;

@interface PGGraphPerformerNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity> {

	NSString* _name;
	NSString* _uuid;

}

@property (nonatomic,readonly) PPNamedEntity * pg_namedEntity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (readonly) NSString * uuid;                                       //@synthesize uuid=_uuid - In the implementation block
-(NSString *)uuid;
-(id)init;
-(unsigned short)domain;
-(NSString *)name;
-(NSString *)description;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
-(PPNamedEntity *)pg_namedEntity;
@end

