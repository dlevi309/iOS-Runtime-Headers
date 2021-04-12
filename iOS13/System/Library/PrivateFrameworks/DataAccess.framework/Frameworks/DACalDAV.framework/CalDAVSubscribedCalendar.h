/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

@class NSURL, NSString;


@protocol CalDAVSubscribedCalendar <CalDAVCalendar>
@property (nonatomic,retain) NSURL * subscriptionURL; 
@property (assign,nonatomic) BOOL hasAlarmFilter; 
@property (assign,nonatomic) BOOL hasAttachmentFilter; 
@property (assign,nonatomic) BOOL hasTaskFilter; 
@property (assign,nonatomic) double refreshInterval; 
@property (assign,nonatomic) BOOL autoprovisioned; 
@property (nonatomic,retain) NSString * locationCode; 
@property (nonatomic,retain) NSString * languageCode; 
@optional
-(NSString *)languageCode;
-(void)setLanguageCode:(id)arg1;
-(BOOL)autoprovisioned;
-(void)setAutoprovisioned:(BOOL)arg1;
-(NSString *)locationCode;
-(void)setLocationCode:(id)arg1;

@required
-(double)refreshInterval;
-(NSURL *)subscriptionURL;
-(BOOL)hasAlarmFilter;
-(BOOL)hasAttachmentFilter;
-(BOOL)hasTaskFilter;
-(void)setSubscriptionURL:(id)arg1;
-(void)setHasAlarmFilter:(BOOL)arg1;
-(void)setHasAttachmentFilter:(BOOL)arg1;
-(void)setHasTaskFilter:(BOOL)arg1;
-(void)setRefreshInterval:(double)arg1;

@end

