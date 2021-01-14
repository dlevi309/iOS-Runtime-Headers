/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(BOOL)hideSearchField;
-(Class)_classForChildren;
-(void)itemsOrSelectionDidChange:(BOOL)arg1 ;
@end

