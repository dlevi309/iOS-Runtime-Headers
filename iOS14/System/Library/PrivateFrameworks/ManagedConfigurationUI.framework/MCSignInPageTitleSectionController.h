/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/MCProfileTitlePageMetaDataSectionController.h>

@class NSString;

@interface MCSignInPageTitleSectionController : MCProfileTitlePageMetaDataSectionController {

	NSString* _orgName;

}

@property (nonatomic,copy) NSString * orgName;              //@synthesize orgName=_orgName - In the implementation block
-(NSString *)orgName;
-(double)heightForHeader;
-(unsigned long long)numberOfRows;
-(id)cellForRowAtIndex:(unsigned long long)arg1 ;
-(void)setOrgName:(NSString *)arg1 ;
@end

