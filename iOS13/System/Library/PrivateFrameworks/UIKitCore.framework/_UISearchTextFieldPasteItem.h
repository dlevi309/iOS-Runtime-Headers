/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextPasteItem.h>
#import <UIKit/UISearchTextFieldPasteItem.h>

@class UISearchToken, NSString, NSItemProvider, NSDictionary;

@interface _UISearchTextFieldPasteItem : UITextPasteItem <UISearchTextFieldPasteItem> {

	UISearchToken* _searchTokenResult;

}

@property (setter=setSearchTokenResult:,nonatomic,retain) UISearchToken * _searchTokenResult;              //@synthesize searchTokenResult=_searchTokenResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSItemProvider * itemProvider; 
@property (nonatomic,readonly) id localObject; 
@property (nonatomic,readonly) NSDictionary * defaultAttributes; 
-(UISearchToken *)_searchTokenResult;
-(void)setSearchTokenResult:(id)arg1 ;
@end

