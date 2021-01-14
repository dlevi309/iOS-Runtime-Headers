/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <libobjc.A.dylib/HRCategoryViewControllerFactory.h>
#import <libobjc.A.dylib/HRConceptViewControllerFactory.h>

@interface HRViewControllerFactory : NSObject <HRCategoryViewControllerFactory, HRConceptViewControllerFactory>
+(id)shared;
-(id)makeViewControllerForConcept:(id)arg1 fromCategory:(id)arg2 highlightedRecordId:(id)arg3 usingProfile:(id)arg4 ;
-(id)makeViewControllerForCategory:(id)arg1 usingProfile:(id)arg2 ;
-(id)makeTimelineViewControllerForCategory:(id)arg1 showsInitialSearchBar:(BOOL)arg2 usingProfile:(id)arg3 ;
-(id)makeAlphabeticalViewControllerForCategory:(id)arg1 usingProfile:(id)arg2 ;
-(id)init;
-(id)makeSettingsViewControllerUsing:(id)arg1 ;
-(id)makeDetailViewControllerForRecord:(id)arg1 usingProfile:(id)arg2 ;
-(id)makeViewControllerForRecord:(id)arg1 usingProfile:(id)arg2 ;
-(id)makeOnboadingTileViewControllerUsing:(id)arg1 ;
@end

