/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCMatMulDescriptor : NSObject <NSCopying> {

	BOOL _transposesX;
	BOOL _transposesY;
	float _alpha;

}

@property (nonatomic,readonly) float alpha;                   //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,readonly) BOOL transposesX;              //@synthesize transposesX=_transposesX - In the implementation block
@property (nonatomic,readonly) BOOL transposesY;              //@synthesize transposesY=_transposesY - In the implementation block
+(id)descriptor;
+(id)descriptorWithAlpha:(float)arg1 transposesX:(BOOL)arg2 transposesY:(BOOL)arg3 ;
-(float)alpha;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)transposesX;
-(BOOL)transposesY;
-(id)initWithAlpha:(float)arg1 transposesX:(BOOL)arg2 transposesY:(BOOL)arg3 ;
@end

