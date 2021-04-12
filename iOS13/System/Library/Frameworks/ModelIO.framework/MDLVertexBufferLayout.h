/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MDLVertexBufferLayout : NSObject <NSCopying> {

	unsigned long long _stride;

}

@property (assign,nonatomic) unsigned long long stride;              //@synthesize stride=_stride - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStride:(unsigned long long)arg1 ;
-(unsigned long long)stride;
-(id)initWithStride:(unsigned long long)arg1 ;
@end

