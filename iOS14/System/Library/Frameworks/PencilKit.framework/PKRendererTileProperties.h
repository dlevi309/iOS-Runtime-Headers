/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKRendererTileProperties : NSObject <NSCopying> {

	long long _level;
	CGPoint _offset;

}

@property (nonatomic,readonly) long long level;              //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) CGPoint offset;               //@synthesize offset=_offset - In the implementation block
-(CGPoint)offset;
-(long long)level;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLevel:(long long)arg1 offset:(CGPoint)arg2 ;
@end

