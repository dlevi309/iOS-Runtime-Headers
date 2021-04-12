/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@class NSDictionary, NSString;

@interface IMUserNotification : NSObject {

	id _reserved;

}

@property (nonatomic,retain,readonly) id identifier; 
@property (nonatomic,readonly) double timeout; 
@property (nonatomic,readonly) unsigned long long displayFlags; 
@property (nonatomic,retain,readonly) NSDictionary * displayInformation; 
@property (assign,nonatomic) BOOL showInLockScreen; 
@property (assign,nonatomic) BOOL requireUserInteraction; 
@property (assign,nonatomic) BOOL usesNotificationCenter; 
@property (nonatomic,retain) NSString * representedApplicationBundle; 
@property (nonatomic,readonly) unsigned long long response; 
@property (nonatomic,readonly) unsigned long long responseFlags; 
@property (nonatomic,retain,readonly) NSDictionary * responseInformation; 
@property (nonatomic,retain) NSDictionary * userInfo; 
+(id)userNotificationWithIdentifier:(id)arg1 timeout:(double)arg2 alertLevel:(unsigned long long)arg3 displayFlags:(unsigned long long)arg4 displayInformation:(id)arg5 ;
+(id)userNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 alternateButton:(id)arg5 otherButton:(id)arg6 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(double)timeout;
-(unsigned long long)response;
-(NSDictionary *)displayInformation;
-(id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 displayFlags:(unsigned long long)arg3 displayInformation:(id)arg4 ;
-(unsigned long long)displayFlags;
-(BOOL)showInLockScreen;
-(unsigned long long)responseFlags;
-(NSString *)representedApplicationBundle;
-(void)setRepresentedApplicationBundle:(NSString *)arg1 ;
-(void)setShowInLockScreen:(BOOL)arg1 ;
-(BOOL)usesNotificationCenter;
-(BOOL)requireUserInteraction;
-(void)setRequireUserInteraction:(BOOL)arg1 ;
-(NSDictionary *)responseInformation;
-(void)setUsesNotificationCenter:(BOOL)arg1 ;
-(void)_setResponseFlags:(unsigned long long)arg1 responseInformation:(id)arg2 ;
-(id)identifier;
@end

