/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <ShareSheet/UIActivity.h>

@class NSArray, UIWindow;

@interface ICExportNotesActivity : UIActivity {

	NSArray* _noteObjectIDs;
	UIWindow* _window;

}

@property (nonatomic,retain) NSArray * noteObjectIDs;              //@synthesize noteObjectIDs=_noteObjectIDs - In the implementation block
@property (nonatomic,retain) UIWindow * window;                    //@synthesize window=_window - In the implementation block
-(id)activityType;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(void)setNoteObjectIDs:(NSArray *)arg1 ;
-(NSArray *)noteObjectIDs;
-(id)initWithNotes:(id)arg1 forPresentingInWindow:(id)arg2 ;
@end

