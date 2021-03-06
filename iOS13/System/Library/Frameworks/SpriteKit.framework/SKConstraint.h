/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SKNode;

@interface SKConstraint : NSObject <NSSecureCoding, NSCopying> {

	BOOL _enabled;
	SKNode* _referenceNode;

}

@property (assign) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) SKNode * referenceNode;              //@synthesize referenceNode=_referenceNode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)scaleX:(id)arg1 scaleY:(id)arg2 ;
+(id)scale:(id)arg1 ;
+(id)positionX:(id)arg1 ;
+(id)positionY:(id)arg1 ;
+(id)positionX:(id)arg1 Y:(id)arg2 ;
+(id)distance:(id)arg1 toNode:(id)arg2 ;
+(id)distance:(id)arg1 toPoint:(CGPoint)arg2 ;
+(id)distance:(id)arg1 toPoint:(CGPoint)arg2 inNode:(id)arg3 ;
+(id)zRotation:(id)arg1 ;
+(id)orientToPoint:(CGPoint)arg1 inNode:(id)arg2 offset:(id)arg3 ;
+(id)orientToNode:(id)arg1 offset:(id)arg2 ;
+(id)orientToPoint:(CGPoint)arg1 offset:(id)arg2 ;
+(id)width:(id)arg1 ;
+(id)height:(id)arg1 ;
+(id)width:(id)arg1 height:(id)arg2 ;
+(id)scaleX:(id)arg1 ;
+(id)scaleY:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SKNode *)referenceNode;
-(void)setReferenceNode:(SKNode *)arg1 ;
-(BOOL)isEqualToConstraint:(id)arg1 ;
@end

