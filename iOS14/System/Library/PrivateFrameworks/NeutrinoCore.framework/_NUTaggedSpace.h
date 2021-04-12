/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NUSpace *)space;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)tagNodes;
-(id)initWithSpace:(id)arg1 ;
-(BOOL)hasTransform;
-(void)addTagNode:(id)arg1 ;
-(void)addTagNodes:(id)arg1 ;
-(void)mergeSpace:(id)arg1 ;
-(BOOL)isEqualToTaggedImageSpace:(id)arg1 ;
@end

