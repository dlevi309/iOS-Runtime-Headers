/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, NSError, NSObject, UNUserNotificationCenter, NSArray;

@interface CUUserNotificationSession : NSObject <UNUserNotificationCenterDelegate> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSString* _requestIdentifier;
	int _state;
	NSError* _stepError;
	int _stepState;
	NSObject*<OS_dispatch_source> _timer;
	UNUserNotificationCenter* _unCenter;
	LogCategory* _ucat;
	unsigned _flags;
	/*^block*/id _actionHandler;
	NSString* _bodyKey;
	NSArray* _bodyArguments;
	NSString* _bundleID;
	NSString* _categoryID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _header;
	NSString* _iconAppIdentifier;
	NSString* _iconName;
	NSString* _iconPath;
	NSString* _identifier;
	NSString* _label;
	long long _soundAlertType;
	NSString* _subtitleKey;
	NSArray* _subtitleArguments;
	double _timeoutSeconds;
	NSString* _titleKey;
	NSArray* _titleArguments;

}

@property (nonatomic,copy) id actionHandler;                                          //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,copy) NSString * bodyKey;                                        //@synthesize bodyKey=_bodyKey - In the implementation block
@property (nonatomic,copy) NSArray * bodyArguments;                                   //@synthesize bodyArguments=_bodyArguments - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * categoryID;                                     //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * header;                                         //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * iconAppIdentifier;                              //@synthesize iconAppIdentifier=_iconAppIdentifier - In the implementation block
@property (nonatomic,copy) NSString * iconName;                                       //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,copy) NSString * iconPath;                                       //@synthesize iconPath=_iconPath - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long soundAlertType;                                //@synthesize soundAlertType=_soundAlertType - In the implementation block
@property (nonatomic,copy) NSString * subtitleKey;                                    //@synthesize subtitleKey=_subtitleKey - In the implementation block
@property (nonatomic,copy) NSArray * subtitleArguments;                               //@synthesize subtitleArguments=_subtitleArguments - In the implementation block
@property (assign,nonatomic) double timeoutSeconds;                                   //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,copy) NSString * titleKey;                                       //@synthesize titleKey=_titleKey - In the implementation block
@property (nonatomic,copy) NSArray * titleArguments;                                  //@synthesize titleArguments=_titleArguments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)_invalidate;
-(NSString *)identifier;
-(unsigned)flags;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)timeoutSeconds;
-(void)setTimeoutSeconds:(double)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)_invalidated;
-(NSString *)header;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(void)activate;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setHeader:(NSString *)arg1 ;
-(void)_run;
-(void)_reportError:(id)arg1 ;
-(void)_reportTimeout;
-(BOOL)_runInit:(id*)arg1 ;
-(void)_runAuthorizeCheckStart;
-(void)_runAuthorizeRequestStart;
-(BOOL)_runRequestAddStart:(id*)arg1 ;
-(BOOL)_runResponse:(id)arg1 error:(id*)arg2 ;
-(NSString *)bodyKey;
-(void)setBodyKey:(NSString *)arg1 ;
-(NSArray *)bodyArguments;
-(void)setBodyArguments:(NSArray *)arg1 ;
-(NSString *)categoryID;
-(void)setCategoryID:(NSString *)arg1 ;
-(NSString *)iconAppIdentifier;
-(void)setIconAppIdentifier:(NSString *)arg1 ;
-(NSString *)iconName;
-(void)setIconName:(NSString *)arg1 ;
-(NSString *)iconPath;
-(void)setIconPath:(NSString *)arg1 ;
-(long long)soundAlertType;
-(void)setSoundAlertType:(long long)arg1 ;
-(NSString *)subtitleKey;
-(void)setSubtitleKey:(NSString *)arg1 ;
-(NSArray *)subtitleArguments;
-(void)setSubtitleArguments:(NSArray *)arg1 ;
-(NSString *)titleKey;
-(void)setTitleKey:(NSString *)arg1 ;
-(NSArray *)titleArguments;
-(void)setTitleArguments:(NSArray *)arg1 ;
@end

