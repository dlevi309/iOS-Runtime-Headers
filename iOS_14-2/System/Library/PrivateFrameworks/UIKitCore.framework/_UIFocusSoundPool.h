/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSURL, NSArray;

@interface _UIFocusSoundPool : NSObject {

	NSURL* _soundFileURL;
	unsigned _originalSystemSoundID;
	NSArray* _queue;
	unsigned long long _queueIndex;

}
-(id)initWithSoundFileURL:(id)arg1 ;
-(id)initWithSystemSoundID:(unsigned)arg1 ;
-(unsigned)playableSystemSoundID;
@end

