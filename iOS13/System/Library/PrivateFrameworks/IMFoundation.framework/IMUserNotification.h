/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) BOOL usesNotificationCenter; 
@property (nonatomic,retain) NSString * representedApplicationBundle; 
@property (nonatomic,readonly) unsigned long long response; 
@property (nonatomic,readonly) unsigned long long responseFlags; 
@property (nonatomic,retain,readonly) NSDictionary * responseInformation; 
@property (nonatomic,retain) NSDictionary * userInfo; 
+(id)userNotificationWithIdentifier:(id)arg1 timeout:(double)arg2 alertLevel:(unsigned long long)arg3 displayFlags:(unsigned long long)arg4 displayInformation:(id)arg5 ;
+(id)userNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 alternateButton:(id)arg5 otherButton:(id)arg6 ;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(id)identifier;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(double)timeout;
-(unsigned long long)response;
-(id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 displayFlags:(unsigned long long)arg3 displayInformation:(id)arg4 ;
-(unsigned long long)responseFlags;
-(NSDictionary *)displayInformation;
-(unsigned long long)displayFlags;
-(NSString *)representedApplicationBundle;
-(void)setRepresentedApplicationBundle:(NSString *)arg1 ;
-(BOOL)showInLockScreen;
-(void)setShowInLockScreen:(BOOL)arg1 ;
-(BOOL)usesNotificationCenter;
-(void)setUsesNotificationCenter:(BOOL)arg1 ;
-(NSDictionary *)responseInformation;
-(void)_setResponseFlags:(unsigned long long)arg1 responseInformation:(id)arg2 ;
@end

