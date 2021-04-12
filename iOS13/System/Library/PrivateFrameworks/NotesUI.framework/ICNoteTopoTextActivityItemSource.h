/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKit/UIActivityItemSource.h>

@class ICNote, NSString;

@interface ICNoteTopoTextActivityItemSource : NSObject <UIActivityItemSource> {

	ICNote* _note;

}

@property (nonatomic,retain) ICNote * note;                         //@synthesize note=_note - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(ICNote *)note;
-(void)setNote:(ICNote *)arg1 ;
-(id)initWithNote:(id)arg1 ;
@end

