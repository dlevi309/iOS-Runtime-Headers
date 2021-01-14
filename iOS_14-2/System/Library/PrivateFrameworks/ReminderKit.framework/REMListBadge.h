/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class NSString;

@interface REMListBadge : NSObject {

	NSString* emblem;
	NSString* emoji;

}

@property (nonatomic,copy) NSString * emblem; 
@property (nonatomic,copy) NSString * emoji; 
@property (nonatomic,copy,readonly) NSString * rawValue; 
-(NSString *)emoji;
-(NSString *)emblem;
-(NSString *)rawValue;
-(void)setEmoji:(NSString *)arg1 ;
-(void)setEmblem:(NSString *)arg1 ;
-(id)initWithRawValue:(id)arg1 ;
-(BOOL)_isJSONString:(id)arg1 ;
-(id)_emojiFromRawString:(id)arg1 ;
-(id)initWithEmblem:(id)arg1 ;
-(id)initWithEmoji:(id)arg1 ;
-(BOOL)_isSingleCharacterEmoji:(id)arg1 ;
@end

