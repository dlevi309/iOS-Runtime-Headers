/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKit/UIActivityItemSourceAttachment.h>

@class NSString;

@interface ICNoteBaseActivityItemSource : NSObject <UIActivityItemSourceAttachment> {

	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
@end

