/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/ICNoteBaseActivityItemSource.h>
#import <UIKit/UIActivityItemSource.h>

@class NSAttributedString, NSString;

@interface ICNoteStringActivityItemSource : ICNoteBaseActivityItemSource <UIActivityItemSource> {

	/*^block*/id _attributedStringCreator;
	NSAttributedString* _attributedString;

}

@property (nonatomic,copy) id attributedStringCreator;                         //@synthesize attributedStringCreator=_attributedStringCreator - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(id)init;
-(NSAttributedString *)attributedString;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)initWithTitle:(id)arg1 attributedStringCreator:(/*^block*/id)arg2 ;
-(void)setAttributedStringCreator:(id)arg1 ;
-(id)attributedStringCreator;
-(BOOL)allowsAttributedStringForActivityType:(id)arg1 ;
@end

