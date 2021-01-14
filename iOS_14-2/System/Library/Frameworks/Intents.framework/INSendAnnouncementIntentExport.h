/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INAnnouncement, NSArray, NSNumber;


@protocol INSendAnnouncementIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INAnnouncement * announcement; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSNumber * isReply; 
@required
-(NSArray *)recipients;
-(id)init;
-(void)setRecipients:(id)arg1;
-(INAnnouncement *)announcement;
-(void)setAnnouncement:(id)arg1;
-(NSNumber *)isReply;
-(void)setIsReply:(id)arg1;

@end

