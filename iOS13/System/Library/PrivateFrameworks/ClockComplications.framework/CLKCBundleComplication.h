/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockComplications.framework/ClockComplications
*/

#import <ClockComplications/CLKCComplication.h>

@class NSString;

@interface CLKCBundleComplication : CLKCComplication {

	NSString* _bundleIdentifier;
	NSString* _appBundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
+(id)complicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSString *)appBundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 ;
@end

