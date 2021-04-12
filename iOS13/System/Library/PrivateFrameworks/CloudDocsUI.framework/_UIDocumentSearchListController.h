/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/_UIDocumentListController.h>

@class _UIDocumentPickerSearchContainerModel, NSString;

@interface _UIDocumentSearchListController : _UIDocumentListController {

	_UIDocumentPickerSearchContainerModel* _model;

}

@property (nonatomic,retain) NSString * queryString; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)init;
-(id)initWithModel:(id)arg1 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(BOOL)hideSearchField;
-(Class)_classForChildren;
-(void)itemsOrSelectionDidChange:(BOOL)arg1 ;
@end

