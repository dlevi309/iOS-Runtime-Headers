/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphLocationNode.h>

@class NSString;

@interface PGGraphNamedLocationNode : PGGraphLocationNode {

	NSString* _name;
	NSString* _uuid;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * UUID;              //@synthesize uuid=_uuid - In the implementation block
-(NSString *)UUID;
-(id)initWithLabel:(id)arg1 ;
-(unsigned short)domain;
-(NSString *)name;
-(id)description;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(void)setName:(NSString *)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(BOOL)hasProperties:(id)arg1 ;
@end

