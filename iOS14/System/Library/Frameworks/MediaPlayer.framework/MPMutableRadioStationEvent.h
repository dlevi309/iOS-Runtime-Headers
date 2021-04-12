/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString, NSDate;


@protocol MPMutableRadioStationEvent <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSDate * startTime; 
@property (nonatomic,copy) NSDate * endTime; 
@required
-(NSString *)descriptionText;
-(void)setDescriptionText:(id)arg1;
-(void)setStartTime:(id)arg1;
-(void)setTitle:(id)arg1;
-(void)setEndTime:(id)arg1;
-(NSDate *)endTime;
-(NSDate *)startTime;
-(NSString *)title;

@end

