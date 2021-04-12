/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/MCProfileTitlePageMetaDataSectionController.h>

@class NSString;

@interface MCSignInPageTitleSectionController : MCProfileTitlePageMetaDataSectionController {

	NSString* _orgName;

}

@property (nonatomic,copy) NSString * orgName;              //@synthesize orgName=_orgName - In the implementation block
-(NSString *)orgName;
-(unsigned long long)numberOfRows;
-(double)heightForHeader;
-(id)cellForRowAtIndex:(unsigned long long)arg1 ;
-(void)setOrgName:(NSString *)arg1 ;
@end

