/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class CADisplayLink, NSMutableDictionary;

@interface _HandsDisplayLinkManager : NSObject {

	CADisplayLink* _displayLink;
	NSMutableDictionary* _handlers;
	unsigned long long _nextToken;
	BOOL _inForeground;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_backgrounded;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(id)_nextToken;
-(void)_updateDisplayLink;
-(void)_foregrounded;
-(void)_onDisplayLink:(id)arg1 ;
-(void)stopUpdatesForToken:(id)arg1 ;
-(void)_invokeHandlers;
@end

