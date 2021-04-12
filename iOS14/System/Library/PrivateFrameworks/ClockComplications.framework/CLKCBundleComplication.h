/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)bundleIdentifier;
-(NSString *)appBundleIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 ;
@end

