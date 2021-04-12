/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLCommandBufferDescriptor : NSObject <NSCopying> {

	BOOL _retainedReferences;
	unsigned long long _errorOptions;

}

@property (assign,nonatomic) BOOL retainedReferences;                      //@synthesize retainedReferences=_retainedReferences - In the implementation block
@property (assign,nonatomic) unsigned long long errorOptions;              //@synthesize errorOptions=_errorOptions - In the implementation block
-(void)setErrorOptions:(unsigned long long)arg1 ;
-(unsigned long long)errorOptions;
-(BOOL)retainedReferences;
-(id)init;
-(void)setRetainedReferences:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

