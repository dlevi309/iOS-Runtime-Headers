/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextPasteItem.h>
#import <UIKit/UISearchTextFieldPasteItem.h>

@class UISearchToken, NSItemProvider, NSDictionary, NSString;

@interface _UISearchTextFieldPasteItem : UITextPasteItem <UISearchTextFieldPasteItem> {

	UISearchToken* _searchTokenResult;

}

@property (setter=setSearchTokenResult:,nonatomic,retain) UISearchToken * _searchTokenResult;              //@synthesize searchTokenResult=_searchTokenResult - In the implementation block
@property (nonatomic,readonly) NSItemProvider * itemProvider; 
@property (nonatomic,readonly) id localObject; 
@property (nonatomic,readonly) NSDictionary * defaultAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UISearchToken *)_searchTokenResult;
-(void)setSearchTokenResult:(id)arg1 ;
@end

