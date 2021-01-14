/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <ShareSheet/UIActivity.h>

@class NSArray, UIViewController, UIBarButtonItem;

@interface ICExportNotesActivity : UIActivity {

	NSArray* _noteObjectIDs;
	UIViewController* _viewController;
	UIBarButtonItem* _barButtonItem;

}

@property (nonatomic,retain) NSArray * noteObjectIDs;                        //@synthesize noteObjectIDs=_noteObjectIDs - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonItem;                //@synthesize barButtonItem=_barButtonItem - In the implementation block
-(UIBarButtonItem *)barButtonItem;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)activityType;
-(void)performActivity;
-(UIViewController *)viewController;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)activityImage;
-(NSArray *)noteObjectIDs;
-(id)initWithNotes:(id)arg1 forPresentingFromViewController:(id)arg2 barButtonItem:(id)arg3 ;
-(void)setNoteObjectIDs:(NSArray *)arg1 ;
@end

