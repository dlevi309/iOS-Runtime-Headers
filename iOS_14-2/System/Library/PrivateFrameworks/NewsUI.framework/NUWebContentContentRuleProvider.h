/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SXWebContentComponentContentRuleProvider.h>

@protocol FCNewsAppConfigurationManager, FCHeadlineProviding;
@class NSString;

@interface NUWebContentContentRuleProvider : NSObject <SXWebContentComponentContentRuleProvider> {

	id<FCNewsAppConfigurationManager> _appConfigurationManager;
	id<FCHeadlineProviding> _headline;

}

@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (nonatomic,readonly) id<FCHeadlineProviding> headline;                                       //@synthesize headline=_headline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCHeadlineProviding>)headline;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(id)contentRules;
-(id)initWithAppConfigurationManager:(id)arg1 headline:(id)arg2 ;
@end

