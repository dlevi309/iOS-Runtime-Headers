/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSDate, NSDictionary, NSMutableDictionary, NSMutableArray, NSString;

@interface IMTunesController : NSObject {

	NSDate* _lastChange;
	NSDictionary* _lastInfo;
	NSMutableDictionary* _playerInfo;
	NSMutableArray* _listeners;
	NSString* _messageFormat;

}

@property (assign,nonatomic) NSMutableDictionary * playerInfo;              //@synthesize playerInfo=_playerInfo - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) NSString * messageFormat; 
+(id)sharedTunesController;
-(id)init;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(NSMutableDictionary *)playerInfo;
-(NSString *)messageFormat;
-(void)_updateMessage;
-(void)_playerChanged:(id)arg1 ;
-(void)_playerChangedNotification:(id)arg1 ;
-(void)setPlayerInfo:(NSMutableDictionary *)arg1 ;
@end

