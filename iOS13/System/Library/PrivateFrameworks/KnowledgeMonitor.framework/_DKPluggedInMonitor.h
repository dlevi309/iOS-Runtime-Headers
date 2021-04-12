/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKPluggedInMonitor : _DKMonitor {

	BOOL _enabled;
	int _pluggedInToken;

}

@property (assign,nonatomic) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int pluggedInToken;              //@synthesize pluggedInToken=_pluggedInToken - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(void)setIsPluggedIn:(BOOL)arg1 ;
+(id)_eventWithState:(BOOL)arg1 adapterType:(long long)arg2 ;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)deactivate;
-(int)pluggedInToken;
-(void)setPluggedInToken:(int)arg1 ;
-(long long)currentAdapterType;
-(void)setCurrentState;
@end

