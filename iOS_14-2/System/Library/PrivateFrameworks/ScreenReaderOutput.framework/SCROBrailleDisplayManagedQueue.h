/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class SCRCIndexMap;

@interface SCROBrailleDisplayManagedQueue : NSObject {

	SCRCIndexMap* _stateQueueMap;
	CFDictionaryRef _queueStateDict;
	CFDictionaryRef _displayQueueDict;
	SCRCIndexMap* _tokenDisplayMap;
	unsigned long long _maxActiveQueueSize;

}
-(void)removeDisplay:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_queueForState:(int)arg1 createQueue:(BOOL)arg2 ;
-(void)_fillActiveBrailleDisplayQueue;
-(id)disconnectedDisplays;
-(void)addDisplay:(id)arg1 withState:(int)arg2 ;
-(void)setState:(int)arg1 forDisplay:(id)arg2 ;
-(int)stateForDisplay:(id)arg1 ;
-(id)displayForToken:(int)arg1 ;
-(unsigned long long)displayCountIncludingDisconnectedDisplays:(BOOL)arg1 ;
-(id)primaryDisplay;
-(void)setPrimaryDisplay:(id)arg1 ;
-(unsigned long long)activeQueueMaximumSize;
-(void)setActiveQueueMaximumSize:(unsigned long long)arg1 ;
-(id)activeDisplays;
-(id)activePendingDisplays;
-(id)sleepingDisplays;
-(id)loadingDisplays;
@end

