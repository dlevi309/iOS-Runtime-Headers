/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class NSString;

@interface NUOnboardingVersionProvider : NSObject <NUAdContextProvider> {

	long long _onboardingVersion;

}

@property (nonatomic,readonly) long long onboardingVersion;              //@synthesize onboardingVersion=_onboardingVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)onboardingVersion;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)initWithOnboardingVersion:(long long)arg1 ;
@end

