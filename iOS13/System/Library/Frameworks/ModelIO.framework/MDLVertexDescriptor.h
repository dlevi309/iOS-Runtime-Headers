/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)attributes;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(void)reset;
-(id)attributeNamed:(id)arg1 ;
-(NSMutableArray *)layouts;
-(void)addOrReplaceAttribute:(id)arg1 ;
-(void)setPackedOffsets;
-(void)setPackedStrides;
-(void)debugPrintToFile:(_sFILE*)arg1 ;
-(id)initWithVertexDescriptor:(id)arg1 ;
-(void)removeAttributeNamed:(id)arg1 ;
-(void)setLayouts:(NSMutableArray *)arg1 ;
@end

