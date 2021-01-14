/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLanguageCode:(id)arg1;
-(NSString *)languageCode;
-(BOOL)autoprovisioned;
-(void)setAutoprovisioned:(BOOL)arg1;
-(NSString *)locationCode;
-(void)setLocationCode:(id)arg1;

@required
-(void)setRefreshInterval:(double)arg1;
-(NSURL *)subscriptionURL;
-(double)refreshInterval;
-(BOOL)hasAlarmFilter;
-(BOOL)hasAttachmentFilter;
-(BOOL)hasTaskFilter;
-(void)setSubscriptionURL:(id)arg1;
-(void)setHasAlarmFilter:(BOOL)arg1;
-(void)setHasAttachmentFilter:(BOOL)arg1;
-(void)setHasTaskFilter:(BOOL)arg1;

@end

