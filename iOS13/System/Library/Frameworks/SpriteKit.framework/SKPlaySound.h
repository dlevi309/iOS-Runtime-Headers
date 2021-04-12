/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

