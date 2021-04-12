/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class HKDisplayCategory, NSString;

@interface WDHealthDataCategoryVideoDataProvider : NSObject {

	HKDisplayCategory* _category;
	NSString* _importanceText;
	NSString* _descriptionText;
	NSString* _videoPosterImageName;

}
+(id)descriptionTextForCategory:(id)arg1 ;
+(id)videoPosterImageNameForCategory:(id)arg1 ;
+(id)videoPosterImageNameWithName:(id)arg1 ;
+(id)videoPosterImageNameForOnboarding;
+(id)videoURLManagerIdentifierForOnboarding;
-(id)initWithCategory:(id)arg1 ;
-(id)descriptionText;
-(id)videoPosterImageName;
-(id)videoURLManagerIdentifier;
@end

