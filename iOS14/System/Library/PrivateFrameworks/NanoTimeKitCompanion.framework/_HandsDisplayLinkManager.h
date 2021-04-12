/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_onDisplayLink:(id)arg1 ;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_backgrounded;
-(void)_updateDisplayLink;
-(id)_nextToken;
-(void)_foregrounded;
-(void)dealloc;
-(void)stopUpdatesForToken:(id)arg1 ;
-(void)_invokeHandlers;
@end

