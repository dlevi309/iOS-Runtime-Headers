/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString;


@protocol INReadAnnouncementIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long readType; 
@property (nonatomic,copy) NSString * startAnnouncementIdentifier; 
@property (assign,nonatomic) long long userNotificationType; 
@required
-(id)init;
-(long long)readType;
-(void)setUserNotificationType:(long long)arg1;
-(void)setReadType:(long long)arg1;
-(NSString *)startAnnouncementIdentifier;
-(long long)userNotificationType;
-(void)setStartAnnouncementIdentifier:(id)arg1;

@end

