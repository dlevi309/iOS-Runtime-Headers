/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <libobjc.A.dylib/PNPPencilInteractionEventSource.h>

@protocol PNPPencilInteractionEventDestination;
@class NSArray, NSString;

@interface PNPSyntheticPencilInteractionEventSource : NSObject <PNPPencilInteractionEventSource> {

	BOOL _playing;
	BOOL _cancelled;
	id<PNPPencilInteractionEventDestination> eventDestination;

}

@property (nonatomic,readonly) NSArray * playlist; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PNPPencilInteractionEventDestination> eventDestination; 
-(void)stop;
-(void)play;
-(BOOL)isPlaying;
-(NSArray *)playlist;
-(void)setEventDestination:(id<PNPPencilInteractionEventDestination>)arg1 ;
-(void)_playEventAtPlayheadPosition:(long long)arg1 ;
-(id<PNPPencilInteractionEventDestination>)eventDestination;
-(long long)_playlistPositionForPosition:(long long)arg1 ;
-(id)_terminalEventsForPlayhead;
@end

