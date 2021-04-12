/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)validatedNotificationSettings:(id)arg1 outError:(id*)arg2 ;
-(void)setNotificationSettings:(NSArray *)arg1 ;
-(NSArray *)notificationSettings;
@end

