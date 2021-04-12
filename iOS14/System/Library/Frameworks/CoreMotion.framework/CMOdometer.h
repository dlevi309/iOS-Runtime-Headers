/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol CMOdometerDelegate;
@class CMOdometerProxy;

@interface CMOdometer : NSObject {

	id<CMOdometerDelegate> _delegate;
	CMOdometerProxy* _odometerProxy;

}

@property (nonatomic,readonly) CMOdometerProxy * odometerProxy;              //@synthesize odometerProxy=_odometerProxy - In the implementation block
@property (assign,nonatomic) id<CMOdometerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<CMOdometerDelegate>)delegate;
-(CMOdometerProxy *)odometerProxy;
-(void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopOdometerUpdates;
-(void)setDelegate:(id<CMOdometerDelegate>)arg1 ;
-(void)dealloc;
@end

