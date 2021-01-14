/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SKAttributeValue : NSObject <NSSecureCoding> {

	long long _type;
	float floatValues[4];
	unsigned short halfFloatValues[4];

}

@property (nonatomic,readonly) long long type;                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic)  vectorFloat2Value; 
@property (assign,nonatomic)  vectorFloat3Value; 
@property (assign,nonatomic)  vectorFloat4Value; 
+(BOOL)supportsSecureCoding;
+(id)valueWithFloat:(float)arg1 ;
+(id)valueWithVectorFloat2:;
+(id)valueWithVectorFloat3:;
+(id)valueWithVectorFloat4:;
-(float)floatValue;
-(id)init;
-(void)setFloatValue:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setVectorFloat2Value:;
-(void)setVectorFloat4Value:;
-(BOOL)copyValueTo:(void*)arg1 type:(long long)arg2 count:(unsigned)arg3 ;
-(void)setVectorFloat3Value:;
-()vectorFloat2Value;
-()vectorFloat3Value;
-()vectorFloat4Value;
-(BOOL)isEqualToAttributeValue:(id)arg1 ;
@end
