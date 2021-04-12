/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_PKTouchDetectionProtocol.h>
#import <libobjc.A.dylib/PKPencilTouchDetectionGestureRecognizerDelegate.h>

@class NSXPCListener, FBSDisplayLayoutMonitor, PKPencilTouchDetectionGestureRecognizer, NSUserDefaults, NSMutableDictionary, NSDictionary, NSString;

@interface PKPencilTouchDetectionService : NSObject <NSXPCListenerDelegate, _PKTouchDetectionProtocol, PKPencilTouchDetectionGestureRecognizerDelegate> {

	BOOL _isListening;
	BOOL _wereFrontBoardOverlaysEnabled;
	NSXPCListener* _listener;
	FBSDisplayLayoutMonitor* _displayLayoutMonitor;
	PKPencilTouchDetectionGestureRecognizer* _detectionGesture;
	NSUserDefaults* _pencilDefaults;
	NSMutableDictionary* _timestamps;
	NSDictionary* _userInfoForNotification;

}

@property (nonatomic,retain) NSXPCListener * listener;                                                //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic) BOOL isListening;                                                        //@synthesize isListening=_isListening - In the implementation block
@property (nonatomic,retain) FBSDisplayLayoutMonitor * displayLayoutMonitor;                          //@synthesize displayLayoutMonitor=_displayLayoutMonitor - In the implementation block
@property (assign,nonatomic) BOOL wereFrontBoardOverlaysEnabled;                                      //@synthesize wereFrontBoardOverlaysEnabled=_wereFrontBoardOverlaysEnabled - In the implementation block
@property (nonatomic,retain) PKPencilTouchDetectionGestureRecognizer * detectionGesture;              //@synthesize detectionGesture=_detectionGesture - In the implementation block
@property (nonatomic,retain) NSUserDefaults * pencilDefaults;                                         //@synthesize pencilDefaults=_pencilDefaults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * timestamps;                                        //@synthesize timestamps=_timestamps - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfoForNotification;                                  //@synthesize userInfoForNotification=_userInfoForNotification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)beginObservingTouchesForDetection;
-(void)_nop:(id)arg1 ;
-(FBSDisplayLayoutMonitor *)displayLayoutMonitor;
-(id)init;
-(NSMutableDictionary *)timestamps;
-(void)setTimestamps:(NSMutableDictionary *)arg1 ;
-(void)reset:(id)arg1 ;
-(BOOL)isListening;
-(void)setDisplayLayoutMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSDictionary *)userInfoForNotification;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setIsListening:(BOOL)arg1 ;
-(void)dealloc;
-(void)updateTimestampForType:(long long)arg1 ;
-(void)pencilType:(long long)arg1 hasRecentlyBeenUsedWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)resumeConnectionIfIdle;
-(BOOL)wereFrontBoardOverlaysEnabled;
-(void)persistTimestamps;
-(void)postUpdateNotificationIfNecessary;
-(void)setWereFrontBoardOverlaysEnabled:(BOOL)arg1 ;
-(void)setUserInfoForNotification:(NSDictionary *)arg1 ;
-(NSUserDefaults *)pencilDefaults;
-(void)setPencilDefaults:(NSUserDefaults *)arg1 ;
-(void)loadDefaultsIfNecessary;
-(void)loadTimestampsIfNecessary;
-(BOOL)timestampIndicatesRecentUsage:(id)arg1 ;
-(PKPencilTouchDetectionGestureRecognizer *)detectionGesture;
-(void)setDetectionGesture:(PKPencilTouchDetectionGestureRecognizer *)arg1 ;
@end

