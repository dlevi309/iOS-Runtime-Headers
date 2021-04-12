/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKInCarMonitor : _DKMonitor {

	BOOL _enabled;
	BOOL _connected;
	int _connectedToken;
	int _disconnectedToken;

}

@property (assign,nonatomic) BOOL enabled;                       //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL connected;                     //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) int connectedToken;                 //@synthesize connectedToken=_connectedToken - In the implementation block
@property (assign,nonatomic) int disconnectedToken;              //@synthesize disconnectedToken=_disconnectedToken - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(void)setIsConnected:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)deactivate;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(id)loadState;
-(void)saveState;
-(void)setConnectedStatus:(BOOL)arg1 ;
-(int)connectedToken;
-(void)setConnectedToken:(int)arg1 ;
-(int)disconnectedToken;
-(void)setDisconnectedToken:(int)arg1 ;
@end

