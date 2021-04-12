/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <libobjc.A.dylib/HRRecordViewControllerFactory.h>
#import <libobjc.A.dylib/HRConceptViewControllerFactory.h>
#import <libobjc.A.dylib/HRCategoryViewControllerFactory.h>

@class HRProfile;

@interface HRViewControllerFactory : NSObject <HRRecordViewControllerFactory, HRConceptViewControllerFactory, HRCategoryViewControllerFactory> {

	 profile;

}

@property (readonly,nonatomic) HRProfile * profile; 
+(id)shared;
-(id)makeViewControllerForConcept:(id)arg1 fromCategory:(id)arg2 highlightedRecordId:(id)arg3 ;
-(id)makeViewControllerForCategory:(id)arg1 ;
-(id)makeTimelineViewControllerForCategory:(id)arg1 showsInitialSearchBar:(BOOL)arg2 ;
-(id)makeAlphabeticalViewControllerForCategory:(id)arg1 ;
-(id)init;
-(HRProfile *)profile;
-(id)makeDetailViewControllerForRecord:(id)arg1 ;
-(id)makeViewControllerForRecord:(id)arg1 ;
-(id)makeSettingsViewController;
@end

