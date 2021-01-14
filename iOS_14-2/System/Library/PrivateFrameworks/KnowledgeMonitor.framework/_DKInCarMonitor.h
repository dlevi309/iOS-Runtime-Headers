/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)loadState;
-(BOOL)connected;
-(void)saveState;
-(BOOL)enabled;
-(void)setConnected:(BOOL)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(void)start;
-(void)setEnabled:(BOOL)arg1 ;
-(int)disconnectedToken;
-(void)stop;
-(void)deactivate;
-(void)setDisconnectedToken:(int)arg1 ;
-(int)connectedToken;
-(void)setConnectedToken:(int)arg1 ;
-(void)setConnectedStatus:(BOOL)arg1 ;
-(void)dealloc;
@end

