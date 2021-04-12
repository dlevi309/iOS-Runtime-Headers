/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/


@class NSDate, NSString;

@interface MSSetupEvent : NSObject {

	BOOL _sent;
	int _result;
	int _numberOfErrors;
	int _numberOfHomesWithVR;
	int _numberOfHomeAdded;
	NSDate* _startTime;
	NSDate* _endTime;
	NSString* _serviceId;

}

@property (nonatomic,retain) NSDate * startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                     //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) int result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSString * serviceId;                 //@synthesize serviceId=_serviceId - In the implementation block
@property (assign,nonatomic) int numberOfErrors;                   //@synthesize numberOfErrors=_numberOfErrors - In the implementation block
@property (assign,nonatomic) int numberOfHomesWithVR;              //@synthesize numberOfHomesWithVR=_numberOfHomesWithVR - In the implementation block
@property (assign,nonatomic) int numberOfHomeAdded;                //@synthesize numberOfHomeAdded=_numberOfHomeAdded - In the implementation block
@property (assign,nonatomic) BOOL sent;                            //@synthesize sent=_sent - In the implementation block
-(void)setResult:(int)arg1 ;
-(id)init;
-(NSString *)serviceId;
-(BOOL)sent;
-(void)setStartTime:(NSDate *)arg1 ;
-(int)result;
-(void)setServiceId:(NSString *)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setSent:(BOOL)arg1 ;
-(NSDate *)endTime;
-(NSDate *)startTime;
-(int)numberOfErrors;
-(void)setNumberOfHomesWithVR:(int)arg1 ;
-(void)setNumberOfHomeAdded:(int)arg1 ;
-(void)setNumberOfErrors:(int)arg1 ;
-(int)numberOfHomeAdded;
-(int)numberOfHomesWithVR;
-(id)resultAsString;
-(void)addHome:(id)arg1 ;
@end

