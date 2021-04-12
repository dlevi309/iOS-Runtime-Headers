/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordTimelineViewController.h>

@protocol WDMedicalRecordSearchResultViewControllerDelegate;
@class NSPredicate;

@interface WDMedicalRecordSearchResultViewController : WDMedicalRecordTimelineViewController {

	id<WDMedicalRecordSearchResultViewControllerDelegate> _delegate;
	NSPredicate* _predicate;

}

@property (assign,nonatomic,__weak) id<WDMedicalRecordSearchResultViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                                            //@synthesize predicate=_predicate - In the implementation block
-(NSPredicate *)predicate;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<WDMedicalRecordSearchResultViewControllerDelegate>)delegate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)setDelegate:(id<WDMedicalRecordSearchResultViewControllerDelegate>)arg1 ;
@end

