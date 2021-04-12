/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class NSString, SKSoundSource;

@interface SKPlaySound : SKAction {

	NSString* _filePath;
	NSString* _fileName;
	SKCPlaySound* _mycaction;
	CGPoint _position;
	SKSoundSource* _soundSource;

}
+(BOOL)supportsSecureCoding;
+(id)playSoundFileNamed:(id)arg1 atPosition:(CGPoint)arg2 waitForCompletion:(BOOL)arg3 ;
+(id)_audioURLWithName:(id)arg1 bundle:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)reversedAction;
@end

