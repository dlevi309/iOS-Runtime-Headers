/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/


@class NSString, NSDictionary;

@interface BPSFollowUpAttributes : NSObject {

	BOOL _wantNotification;
	NSString* _localizedTitle;
	NSString* _localizedDescription;
	NSDictionary* _followUpActions;
	NSString* _localizedNotificationTitle;
	NSString* _localizedNotificationDescription;

}

@property (assign,nonatomic) BOOL wantNotification;                                  //@synthesize wantNotification=_wantNotification - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                          //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * localizedNotificationTitle;                    //@synthesize localizedNotificationTitle=_localizedNotificationTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedNotificationDescription;              //@synthesize localizedNotificationDescription=_localizedNotificationDescription - In the implementation block
@property (nonatomic,retain) NSDictionary * followUpActions;                         //@synthesize followUpActions=_followUpActions - In the implementation block
+(id)attributeWithOptions:(id)arg1 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(NSString *)localizedDescription;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedNotificationTitle;
-(void)setLocalizedNotificationTitle:(NSString *)arg1 ;
-(NSDictionary *)followUpActions;
-(void)setFollowUpActions:(NSDictionary *)arg1 ;
-(void)setWantNotification:(BOOL)arg1 ;
-(void)setLocalizedNotificationDescription:(NSString *)arg1 ;
-(BOOL)wantNotification;
-(NSString *)localizedNotificationDescription;
@end

