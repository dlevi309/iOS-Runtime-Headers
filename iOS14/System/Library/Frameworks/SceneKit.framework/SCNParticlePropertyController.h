/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CAAnimation, SCNNode, NSString;

@interface SCNParticlePropertyController : NSObject <NSSecureCoding, NSCopying> {

	CAAnimation* _animation;
	long long _inputMode;
	double _inputScale;
	double _inputBias;
	SCNNode* _inputOrigin;
	NSString* _inputProperty;
	id _c3dAnimation;

}

@property (nonatomic,retain) CAAnimation * animation; 
@property (assign,nonatomic) long long inputMode; 
@property (assign,nonatomic) double inputScale; 
@property (assign,nonatomic) double inputBias; 
@property (assign,nonatomic,__weak) SCNNode * inputOrigin; 
@property (nonatomic,copy) NSString * inputProperty; 
+(BOOL)supportsSecureCoding;
+(id)particlePropertyControllerWithAnimation:(id)arg1 ;
+(id)controllerWithAnimation:(id)arg1 ;
-(void)setInputMode:(long long)arg1 ;
-(long long)inputMode;
-(CAAnimation *)animation;
-(id)init;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)inputScale;
-(void)setInputScale:(double)arg1 ;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(double)inputBias;
-(void)setInputBias:(double)arg1 ;
-(SCNNode *)inputOrigin;
-(void)setInputOrigin:(SCNNode *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setC3dAnimation:(id)arg1 ;
-(NSString *)inputProperty;
-(id)c3dAnimation;
-(void)setInputProperty:(NSString *)arg1 ;
-(void)_customEncodingOfSCNParticlePropertyController:(id)arg1 ;
-(void)_customDecodingOfSCNParticlePropertyController:(id)arg1 ;
@end

