/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKDynamicLayerTransactionEffectConfiguration : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _style;

}

@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)configureTransactionEffectEmitterLayer:(id)arg1 withImage:(CGImageRef)arg2 andEmitterShapeData:(id)arg3 ;
-(void)configureTransactionEffectEmitterLayer:(id)arg1 withBounds:(CGRect)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
@end

