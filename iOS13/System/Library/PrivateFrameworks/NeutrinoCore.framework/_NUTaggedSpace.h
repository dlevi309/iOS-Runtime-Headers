/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NUSpace;

@interface _NUTaggedSpace : NSObject <NSCopying> {

	NSMutableArray* _tagNodes;
	NUSpace* _space;

}

@property (readonly) NUSpace * space;              //@synthesize space=_space - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NUSpace *)space;
-(id)initWithSpace:(id)arg1 ;
-(BOOL)hasTransform;
-(id)tagNodes;
-(void)addTagNode:(id)arg1 ;
-(void)addTagNodes:(id)arg1 ;
-(void)mergeSpace:(id)arg1 ;
-(BOOL)isEqualToTaggedImageSpace:(id)arg1 ;
@end

