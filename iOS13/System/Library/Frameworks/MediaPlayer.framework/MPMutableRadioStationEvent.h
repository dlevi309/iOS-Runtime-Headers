/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString, NSDate;


@protocol MPMutableRadioStationEvent <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSDate * startTime; 
@property (nonatomic,copy) NSDate * endTime; 
@required
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(id)arg1;
-(void)setStartTime:(id)arg1;
-(NSString *)descriptionText;
-(void)setDescriptionText:(id)arg1;

@end

