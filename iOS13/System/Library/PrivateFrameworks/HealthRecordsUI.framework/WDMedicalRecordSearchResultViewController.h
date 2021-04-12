/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<WDMedicalRecordSearchResultViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WDMedicalRecordSearchResultViewControllerDelegate>)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
@end

