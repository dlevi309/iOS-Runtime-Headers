/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addListener:(id)arg1 ;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(BOOL)isEnabled;
-(void)_updateMessage;
-(void)dealloc;
-(NSMutableDictionary *)playerInfo;
-(NSString *)messageFormat;
-(void)_playerChanged:(id)arg1 ;
-(void)_playerChangedNotification:(id)arg1 ;
-(void)setPlayerInfo:(NSMutableDictionary *)arg1 ;
@end

