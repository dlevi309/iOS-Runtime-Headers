/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

@class NSString, NSNumber;


@protocol TIUserDictionaryEntry <NSObject>
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * shortcut; 
@property (nonatomic,retain) NSNumber * timestamp; 
@required
-(NSNumber *)timestamp;
-(NSString *)shortcut;
-(NSString *)phrase;
-(void)setShortcut:(id)arg1;
-(void)setTimestamp:(id)arg1;
-(void)setPhrase:(id)arg1;

@end

