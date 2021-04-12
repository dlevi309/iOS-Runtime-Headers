/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <SetupAssistantUI/BFFSplashController.h>
#import <libobjc.A.dylib/BYEnvironmentDependencyReceiver.h>

@protocol BYDeviceProvider;
@class NSString, NSDate;

@interface BFFOnBoardingSplashController : BFFSplashController <BYEnvironmentDependencyReceiver> {

	BOOL _extendBackgroundColorToNavigationBar;
	BOOL _movieShowing;
	long long _feature;
	/*^block*/id _completion;
	id<BYDeviceProvider> _deviceProvider;
	NSString* _preferenceKey;
	NSDate* _placeholderStartDate;
	double _placeholderDuration;
	NSDate* _videoStartDate;

}

@property (retain) NSString * preferenceKey;                                   //@synthesize preferenceKey=_preferenceKey - In the implementation block
@property (assign,nonatomic) long long feature;                                //@synthesize feature=_feature - In the implementation block
@property (assign) BOOL extendBackgroundColorToNavigationBar;                  //@synthesize extendBackgroundColorToNavigationBar=_extendBackgroundColorToNavigationBar - In the implementation block
@property (retain) NSDate * placeholderStartDate;                              //@synthesize placeholderStartDate=_placeholderStartDate - In the implementation block
@property (assign) BOOL movieShowing;                                          //@synthesize movieShowing=_movieShowing - In the implementation block
@property (assign) double placeholderDuration;                                 //@synthesize placeholderDuration=_placeholderDuration - In the implementation block
@property (retain) NSDate * videoStartDate;                                    //@synthesize videoStartDate=_videoStartDate - In the implementation block
@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) id<BYDeviceProvider> deviceProvider;              //@synthesize deviceProvider=_deviceProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudConfigSkipKey;
+(void)needsToRunForFeature:(long long)arg1 usingDeviceProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)feature;
-(void)setFeature:(long long)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithFeature:(long long)arg1 ;
-(NSString *)preferenceKey;
-(void)setPreferenceKey:(NSString *)arg1 ;
-(void)setExtendBackgroundColorToNavigationBar:(BOOL)arg1 ;
-(BOOL)extendBackgroundColorToNavigationBar;
-(void)movieReady:(id)arg1 error:(id)arg2 ;
-(BOOL)movieShowing;
-(void)setPlaceholderDuration:(double)arg1 ;
-(void)setPlaceholderStartDate:(NSDate *)arg1 ;
-(void)setVideoStartDate:(NSDate *)arg1 ;
-(id)movieView;
-(NSDate *)videoStartDate;
-(NSDate *)placeholderStartDate;
-(double)placeholderDuration;
-(void)setMovieShowing:(BOOL)arg1 ;
-(id<BYDeviceProvider>)deviceProvider;
-(void)setDeviceProvider:(id<BYDeviceProvider>)arg1 ;
@end

