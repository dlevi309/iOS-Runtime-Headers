/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@class TLSystemSound, NSURL;

@interface TLAlertTone : NSObject {

	unsigned _actualSoundID;
	unsigned _previewSoundID;
	TLSystemSound* _actualSound;
	TLSystemSound* _previewSound;
	BOOL _requiresLongFormPlayback;
	NSURL* _soundFileURL;

}

@property (nonatomic,readonly) NSURL * soundFileURL;                       //@synthesize soundFileURL=_soundFileURL - In the implementation block
@property (nonatomic,readonly) TLSystemSound * actualSound; 
@property (nonatomic,readonly) TLSystemSound * previewSound; 
@property (nonatomic,readonly) BOOL requiresLongFormPlayback;              //@synthesize requiresLongFormPlayback=_requiresLongFormPlayback - In the implementation block
-(NSURL *)soundFileURL;
-(id)initWithSoundFileURL:(id)arg1 actualSoundID:(unsigned)arg2 previewSoundID:(unsigned)arg3 requiresLongFormPlayback:(BOOL)arg4 ;
-(TLSystemSound *)actualSound;
-(TLSystemSound *)previewSound;
-(BOOL)requiresLongFormPlayback;
@end

