/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@class NSURL;

@interface TLSystemSound : NSObject {

	unsigned _soundID;
	BOOL _shouldDisposeOfSoundID;
	BOOL _requiresLongFormPlayback;
	NSURL* _soundFileURL;

}

@property (nonatomic,readonly) NSURL * soundFileURL;                       //@synthesize soundFileURL=_soundFileURL - In the implementation block
@property (nonatomic,readonly) unsigned soundID; 
@property (nonatomic,readonly) BOOL requiresLongFormPlayback;              //@synthesize requiresLongFormPlayback=_requiresLongFormPlayback - In the implementation block
-(void)dealloc;
-(id)description;
-(NSURL *)soundFileURL;
-(unsigned)soundID;
-(id)initWithSoundFileURL:(id)arg1 soundID:(unsigned)arg2 requiresLongFormPlayback:(BOOL)arg3 ;
-(BOOL)requiresLongFormPlayback;
@end

