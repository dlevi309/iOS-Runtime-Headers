/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSString, NSDate, NSURL;

@interface MTNextAlarm : NSObject {

	BOOL _isSleepAlarm;
	NSString* _title;
	NSDate* _fireDate;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * fireDate;                                //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL isSleepAlarm;                              //@synthesize isSleepAlarm=_isSleepAlarm - In the implementation block
@property (nonatomic,copy,readonly) NSURL * clockAppSectionURL; 
-(NSDate *)fireDate;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(BOOL)isSleepAlarm;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIsSleepAlarm:(BOOL)arg1 ;
-(NSURL *)clockAppSectionURL;
-(NSString *)title;
@end

