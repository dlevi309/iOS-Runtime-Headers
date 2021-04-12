/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AVFAudio/AVAudioSessionPortDescription.h>

@class NSString, NSArray;

@interface AXTestingOutputPort : AVAudioSessionPortDescription {

	NSString* portType;
	NSString* portName;
	NSString* UID;
	NSArray* _ttsChannels;

}

@property (retain) NSString * portType; 
@property (retain) NSString * portName; 
@property (retain) NSString * UID; 
@property (retain) NSArray * ttsChannels;              //@synthesize ttsChannels=_ttsChannels - In the implementation block
-(NSString *)portType;
-(NSString *)portName;
-(id)channels;
-(void)setUID:(NSString *)arg1 ;
-(void)setPortName:(NSString *)arg1 ;
-(NSString *)UID;
-(NSArray *)ttsChannels;
-(void)setPortType:(NSString *)arg1 ;
-(void)setTtsChannels:(NSArray *)arg1 ;
@end

