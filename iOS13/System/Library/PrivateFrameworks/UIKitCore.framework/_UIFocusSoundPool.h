/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSURL, NSArray;

@interface _UIFocusSoundPool : NSObject {

	NSURL* _soundFileURL;
	unsigned _originalSystemSoundID;
	NSArray* _queue;
	unsigned long long _queueIndex;

}
-(id)initWithSystemSoundID:(unsigned)arg1 ;
-(id)initWithSoundFileURL:(id)arg1 ;
-(unsigned)playableSystemSoundID;
@end

