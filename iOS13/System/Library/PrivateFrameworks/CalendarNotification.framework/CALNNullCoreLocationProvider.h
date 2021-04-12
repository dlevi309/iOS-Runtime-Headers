/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
-(int)authorizationStatusForBundle:(id)arg1 ;
-(void)markAsHavingReceivedLocationWithEffectiveBundleIdentifier:(id)arg1 ;
@end

