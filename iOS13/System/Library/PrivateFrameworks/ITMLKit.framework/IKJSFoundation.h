/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol IKAppDeviceConfig;
@class IKAppContext, NSMutableDictionary;

@interface IKJSFoundation : NSObject {

	IKAppContext* _appContext;
	NSMutableDictionary* _jsTimers;
	NSMutableDictionary* _dateFormatterCache;
	id<IKAppDeviceConfig> _deviceConfig;

}

@property (assign,nonatomic,__weak) IKAppContext * appContext;                       //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * jsTimers;                         //@synthesize jsTimers=_jsTimers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dateFormatterCache;               //@synthesize dateFormatterCache=_dateFormatterCache - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppDeviceConfig> deviceConfig;              //@synthesize deviceConfig=_deviceConfig - In the implementation block
-(IKAppContext *)appContext;
-(id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2 ;
-(void)stopTimers;
-(id)setInterval:(id)arg1 time:(long long)arg2 ;
-(void)clearInterval:(id)arg1 ;
-(id)setTimeout:(id)arg1 time:(long long)arg2 ;
-(void)clearTimeout:(id)arg1 ;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(void)clearCookies;
-(id)getCookieForURL:(id)arg1 useSSCookieStorage:(BOOL)arg2 ;
-(void)setCookie:(id)arg1 useSSCookieStorage:(BOOL)arg2 ;
-(id<IKAppDeviceConfig>)deviceConfig;
-(void)setDeviceConfig:(id<IKAppDeviceConfig>)arg1 ;
-(id)_startTimer:(id)arg1 time:(long long)arg2 repeating:(BOOL)arg3 ;
-(void)_clearTimer:(id)arg1 ;
-(NSMutableDictionary *)jsTimers;
-(void)_jsTimerFired:(id)arg1 ;
-(id)_stringForKey:(id)arg1 fromDict:(id)arg2 ;
-(void)setJsTimers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dateFormatterCache;
-(void)setDateFormatterCache:(NSMutableDictionary *)arg1 ;
@end

