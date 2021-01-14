/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTitle:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
-(NSString *)title;
@end

