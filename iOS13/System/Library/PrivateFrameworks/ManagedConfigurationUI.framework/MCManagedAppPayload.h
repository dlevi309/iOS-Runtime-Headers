/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCManagedAppPayload : MCPayload {

	NSString* _managedAppID;

}

@property (nonatomic,retain) NSString * managedAppID;              //@synthesize managedAppID=_managedAppID - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)title;
-(NSString *)managedAppID;
-(id)initWithManagedAppID:(id)arg1 profile:(id)arg2 ;
-(void)setManagedAppID:(NSString *)arg1 ;
@end

