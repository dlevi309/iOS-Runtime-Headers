/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AVFAudio/AVAudioSessionRouteDescription.h>

@class NSArray;

@interface AXTestingRouteDescription : AVAudioSessionRouteDescription {

	NSArray* outputs;
	NSArray* inputs;

}

@property (nonatomic,retain) NSArray * inputs; 
@property (nonatomic,retain) NSArray * outputs; 
-(NSArray *)inputs;
-(NSArray *)outputs;
-(void)setInputs:(NSArray *)arg1 ;
-(void)setOutputs:(NSArray *)arg1 ;
@end

