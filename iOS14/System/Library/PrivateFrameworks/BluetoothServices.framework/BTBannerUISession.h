/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSString;

@interface BTBannerUISession : NSObject {

	BOOL _bannerRunning;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_xpc_object> _xpcConnection;
	int _backgroundColor;
	/*^block*/id _actionHandler;
	NSString* _centerContentText;
	NSString* _centerContentItemsIcon;
	NSString* _centerContentItemsText;
	NSString* _identifier;
	NSString* _label;
	NSString* _leadingAccessoryImageName;
	NSString* _leadingAccessoryImagePath;
	double _timeoutSeconds;
	NSString* _trailingAccessoryImageName;
	NSString* _trailingAccessoryImagePath;
	NSString* _trailingAccessoryText;
	double _lowBatteryLevel;

}

@property (nonatomic,copy) id actionHandler;                                          //@synthesize actionHandler=_actionHandler - In the implementation block
@property (assign,nonatomic) int backgroundColor;                                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * centerContentText;                              //@synthesize centerContentText=_centerContentText - In the implementation block
@property (nonatomic,copy) NSString * centerContentItemsIcon;                         //@synthesize centerContentItemsIcon=_centerContentItemsIcon - In the implementation block
@property (nonatomic,copy) NSString * centerContentItemsText;                         //@synthesize centerContentItemsText=_centerContentItemsText - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * leadingAccessoryImageName;                      //@synthesize leadingAccessoryImageName=_leadingAccessoryImageName - In the implementation block
@property (nonatomic,copy) NSString * leadingAccessoryImagePath;                      //@synthesize leadingAccessoryImagePath=_leadingAccessoryImagePath - In the implementation block
@property (assign,nonatomic) double timeoutSeconds;                                   //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,copy) NSString * trailingAccessoryImageName;                     //@synthesize trailingAccessoryImageName=_trailingAccessoryImageName - In the implementation block
@property (nonatomic,copy) NSString * trailingAccessoryImagePath;                     //@synthesize trailingAccessoryImagePath=_trailingAccessoryImagePath - In the implementation block
@property (nonatomic,copy) NSString * trailingAccessoryText;                          //@synthesize trailingAccessoryText=_trailingAccessoryText - In the implementation block
@property (assign,nonatomic) double lowBatteryLevel;                                  //@synthesize lowBatteryLevel=_lowBatteryLevel - In the implementation block
-(double)timeoutSeconds;
-(void)encodeWithXPCObject:(id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)actionHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setActionHandler:(id)arg1 ;
-(void)setBackgroundColor:(int)arg1 ;
-(int)backgroundColor;
-(void)activate;
-(void)_activate;
-(double)lowBatteryLevel;
-(void)setTimeoutSeconds:(double)arg1 ;
-(void)invalidate;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)label;
-(void)_xpcSendReplyError:(id)arg1 request:(id)arg2 ;
-(void)_xpcStart;
-(void)_xpcSendMessage;
-(void)_xpcEvent:(id)arg1 ;
-(void)_xpcConnectionMessage:(id)arg1 ;
-(void)_xpcCompleted:(id)arg1 ;
-(NSString *)centerContentText;
-(void)setCenterContentText:(NSString *)arg1 ;
-(NSString *)centerContentItemsIcon;
-(void)setCenterContentItemsIcon:(NSString *)arg1 ;
-(NSString *)centerContentItemsText;
-(void)setCenterContentItemsText:(NSString *)arg1 ;
-(NSString *)leadingAccessoryImageName;
-(void)setLeadingAccessoryImageName:(NSString *)arg1 ;
-(NSString *)leadingAccessoryImagePath;
-(void)setLeadingAccessoryImagePath:(NSString *)arg1 ;
-(NSString *)trailingAccessoryImageName;
-(void)setTrailingAccessoryImageName:(NSString *)arg1 ;
-(NSString *)trailingAccessoryImagePath;
-(void)setTrailingAccessoryImagePath:(NSString *)arg1 ;
-(NSString *)trailingAccessoryText;
-(void)setTrailingAccessoryText:(NSString *)arg1 ;
-(void)setLowBatteryLevel:(double)arg1 ;
@end

