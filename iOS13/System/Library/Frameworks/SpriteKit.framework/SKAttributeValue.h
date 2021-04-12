/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFloatValue:(float)arg1 ;
-(BOOL)copyValueTo:(void*)arg1 type:(long long)arg2 count:(unsigned)arg3 ;
-(void)setVectorFloat2Value:;
-(void)setVectorFloat3Value:;
-(void)setVectorFloat4Value:;
-()vectorFloat2Value;
-()vectorFloat3Value;
-()vectorFloat4Value;
-(BOOL)isEqualToAttributeValue:(id)arg1 ;
@end

