/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <libobjc.A.dylib/AVAudioSessionDelegate.h>

@class NSString;

@interface AudioSessionDelegate : NSObject <AVAudioSessionDelegate> {

	BOOL _isUsingSpeaker;
	BOOL _isUsingAudioInput;
	BOOL _interruptions;
	BOOL _preventSessionChanges;

}

@property (assign,nonatomic) BOOL isUsingSpeaker;                     //@synthesize isUsingSpeaker=_isUsingSpeaker - In the implementation block
@property (assign,nonatomic) BOOL isUsingAudioInput;                  //@synthesize isUsingAudioInput=_isUsingAudioInput - In the implementation block
@property (assign,nonatomic) BOOL interruptions;                      //@synthesize interruptions=_interruptions - In the implementation block
@property (assign,nonatomic) BOOL preventSessionChanges;              //@synthesize preventSessionChanges=_preventSessionChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)sdf;
-(id)init;
-(BOOL)inputIsAvailable;
-(void)beginInterruption;
-(void)endInterruptionWithFlags:(unsigned long long)arg1 ;
-(void)inputIsAvailableChanged:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)becomeInactive;
-(BOOL)becomeActiveWithWantsAudioInput:(BOOL)arg1 ;
-(void)setInterruptions:(BOOL)arg1 ;
-(BOOL)preventSessionChanges;
-(void)setIsUsingAudioInput:(BOOL)arg1 ;
-(void)routeDidChange;
-(void)setIsUsingSpeaker:(BOOL)arg1 ;
-(BOOL)interruptions;
-(BOOL)isUsingAudioInput;
-(void)ignoreInterruptionsMode;
-(void)normalInterruptionsMode;
-(float)volumeDBtoSlider:(float)arg1 ;
-(float)sliderToDB:(float)arg1 ;
-(BOOL)isUsingSpeaker;
-(void)setPreventSessionChanges:(BOOL)arg1 ;
@end

