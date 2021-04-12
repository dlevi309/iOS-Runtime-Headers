/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

@class NSString, NSNumber;


@protocol TIUserDictionaryEntry <NSObject>
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * shortcut; 
@property (nonatomic,retain) NSNumber * timestamp; 
@required
-(NSNumber *)timestamp;
-(void)setTimestamp:(id)arg1;
-(NSString *)shortcut;
-(void)setShortcut:(id)arg1;
-(NSString *)phrase;
-(void)setPhrase:(id)arg1;

@end

