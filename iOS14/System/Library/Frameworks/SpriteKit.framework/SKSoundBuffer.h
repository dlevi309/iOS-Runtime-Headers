/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/


@class NSString;

@interface SKSoundBuffer : NSObject {

	unsigned _bufferId;
	NSString* _path;
	double _duration;

}

@property (nonatomic,readonly) unsigned bufferId; 
@property (nonatomic,readonly) double duration; 
+(id)bufferWithFileNamed:(id)arg1 ;
-(id)init;
-(id)description;
-(double)duration;
-(void)dealloc;
-(unsigned)bufferId;
@end

