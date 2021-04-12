/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface MDLVertexDescriptor : NSObject <NSCopying> {

	NSMutableArray* _attributes;
	NSMutableArray* _layouts;

}

@property (nonatomic,retain) NSMutableArray * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * layouts;                 //@synthesize layouts=_layouts - In the implementation block
-(id)init;
-(void)addOrReplaceAttribute:(id)arg1 ;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(id)attributeNamed:(id)arg1 ;
-(NSMutableArray *)attributes;
-(void)setLayouts:(NSMutableArray *)arg1 ;
-(id)description;
-(NSMutableArray *)layouts;
-(unsigned long long)hash;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPackedOffsets;
-(void)setPackedStrides;
-(void)debugPrintToFile:(_sFILE*)arg1 ;
-(id)initWithVertexDescriptor:(id)arg1 ;
-(void)removeAttributeNamed:(id)arg1 ;
@end

