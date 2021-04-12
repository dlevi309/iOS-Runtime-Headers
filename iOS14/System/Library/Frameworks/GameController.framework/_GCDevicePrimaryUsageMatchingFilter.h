/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCDeviceMatchingFilter.h>

@class NSNumber, NSString;

@interface _GCDevicePrimaryUsageMatchingFilter : NSObject <_GCDeviceMatchingFilter> {

	NSNumber* _primaryUsagePage;
	NSNumber* _primaryUsage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)match:(id)arg1 ;
-(id)identifier;
-(id)initWithPrimaryUsagePage:(id)arg1 PrimaryUsage:(id)arg2 ;
@end

