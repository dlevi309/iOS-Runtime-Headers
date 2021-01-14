/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCNotificationSettingsPayload : MCPayload {

	NSArray* _notificationSettings;

}

@property (nonatomic,retain) NSArray * notificationSettings;              //@synthesize notificationSettings=_notificationSettings - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(void)setNotificationSettings:(NSArray *)arg1 ;
-(id)validatedNotificationSettings:(id)arg1 outError:(id*)arg2 ;
-(NSArray *)notificationSettings;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

