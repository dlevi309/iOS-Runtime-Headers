/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPMutableRadioStationEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MPRadioStationEvent : NSObject <MPMutableRadioStationEvent, NSSecureCoding> {

	NSString* _title;
	NSString* _descriptionText;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSDate * startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSDate * endTime;                        //@synthesize endTime=_endTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(NSDate *)startTime;
-(NSString *)title;
@end

