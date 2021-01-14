/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/


@class NSDictionary, NSNumber;

@interface CASessionData : NSObject {

	NSDictionary* _configureEvent;
	NSDictionary* _configureCompleteEvent;
	NSDictionary* _deinitEvent;
	NSNumber* _numberOfErrorEvents;

}

@property (nonatomic,retain) NSDictionary * configureEvent;                      //@synthesize configureEvent=_configureEvent - In the implementation block
@property (nonatomic,retain) NSDictionary * configureCompleteEvent;              //@synthesize configureCompleteEvent=_configureCompleteEvent - In the implementation block
@property (nonatomic,retain) NSDictionary * deinitEvent;                         //@synthesize deinitEvent=_deinitEvent - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfErrorEvents;                     //@synthesize numberOfErrorEvents=_numberOfErrorEvents - In the implementation block
-(void)configure:(id)arg1 ;
-(id)init;
-(void)error:(id)arg1 ;
-(void)deinit:(id)arg1 ;
-(void)logData;
-(void)setNumberOfErrorEvents:(NSNumber *)arg1 ;
-(void)setConfigureEvent:(NSDictionary *)arg1 ;
-(void)setConfigureCompleteEvent:(NSDictionary *)arg1 ;
-(void)setDeinitEvent:(NSDictionary *)arg1 ;
-(NSNumber *)numberOfErrorEvents;
-(NSDictionary *)configureEvent;
-(NSDictionary *)configureCompleteEvent;
-(NSDictionary *)deinitEvent;
-(void)configureComplete:(id)arg1 ;
@end

