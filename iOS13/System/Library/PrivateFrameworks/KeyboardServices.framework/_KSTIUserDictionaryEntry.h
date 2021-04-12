/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

@class NSString, NSDate;


@protocol _KSTIUserDictionaryEntry <NSObject>
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * shortcut; 
@property (nonatomic,retain) NSDate * timestamp; 
@required
-(NSDate *)timestamp;
-(void)setTimestamp:(id)arg1;
-(NSString *)shortcut;
-(void)setShortcut:(id)arg1;
-(NSString *)phrase;
-(void)setPhrase:(id)arg1;

@end

