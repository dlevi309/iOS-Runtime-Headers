/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKit/UIActivityItemSource.h>

@class ICNote, ICShareNoteExporter, NSString;

@interface ICNoteRTFDActivityItemSource : NSObject <UIActivityItemSource> {

	ICNote* _note;
	ICShareNoteExporter* _noteExporter;

}

@property (nonatomic,retain) ICNote * note;                                   //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) ICShareNoteExporter * noteExporter;              //@synthesize noteExporter=_noteExporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(void)setNote:(ICNote *)arg1 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(ICNote *)note;
-(void)setNoteExporter:(ICShareNoteExporter *)arg1 ;
-(ICShareNoteExporter *)noteExporter;
-(id)initWithNote:(id)arg1 noteExporter:(id)arg2 ;
@end

