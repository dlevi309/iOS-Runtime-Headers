/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_eventWithState:(BOOL)arg1 adapterType:(long long)arg2 isWireless:(BOOL)arg3 ;
-(BOOL)enabled;
-(void)synchronouslyReflectCurrentValue;
-(void)start;
-(int)pluggedInToken;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setCurrentState;
-(void)stop;
-(void)deactivate;
-(void)setPluggedInToken:(int)arg1 ;
-(long long)currentAdapterType:(BOOL*)arg1 ;
-(void)dealloc;
@end

