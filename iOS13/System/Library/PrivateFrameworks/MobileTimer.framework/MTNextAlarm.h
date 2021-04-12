/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSDate *)fireDate;
-(void)setFireDate:(NSDate *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isSleepAlarm;
-(void)setIsSleepAlarm:(BOOL)arg1 ;
-(NSURL *)clockAppSectionURL;
@end

