/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/PTRowObserver.h>

@class PTRow, NSString;

@interface PTUIRowTableViewCell : UITableViewCell <PTRowObserver> {

	PTRow* _row;

}

@property (nonatomic,retain) PTRow * row;                           //@synthesize row=_row - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cellStyleForRow:(id)arg1 ;
+(id)reuseIdentifierForRow:(id)arg1 ;
+(double)cellHeightForRow:(id)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(PTRow *)row;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)rowDidChangeValue:(id)arg1 ;
-(void)rowDidChangeTitle:(id)arg1 ;
-(void)rowDidChangeImage:(id)arg1 ;
-(void)rowDidReload:(id)arg1 ;
-(void)setRow:(PTRow *)arg1 ;
-(void)updateDisplayedValue;
-(void)updateCellCharacteristics;
-(void)updateDisplayedContent;
@end

