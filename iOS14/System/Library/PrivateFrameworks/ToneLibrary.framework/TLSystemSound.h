/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)requiresLongFormPlayback;
-(id)description;
-(NSURL *)soundFileURL;
-(unsigned)soundID;
-(void)dealloc;
-(id)initWithSoundFileURL:(id)arg1 soundID:(unsigned)arg2 requiresLongFormPlayback:(BOOL)arg3 ;
@end

