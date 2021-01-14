/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNCoreLocationProvider.h>

@class NSString;

@interface CALNNullCoreLocationProvider : NSObject <CALNCoreLocationProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)arg1 ;
-(int)authorizationStatusForBundle:(id)arg1 ;
-(BOOL)preciseLocationAuthorizedForBundle:(id)arg1 ;
-(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
-(void)markAsHavingReceivedLocationWithEffectiveBundleIdentifier:(id)arg1 ;
@end

