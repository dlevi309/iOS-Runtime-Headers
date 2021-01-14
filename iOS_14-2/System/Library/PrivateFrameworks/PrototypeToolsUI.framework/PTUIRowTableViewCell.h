/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateDisplayedValue;
-(PTRow *)row;
-(void)prepareForReuse;
-(void)setRow:(PTRow *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)rowDidChangeValue:(id)arg1 ;
-(void)rowDidChangeTitle:(id)arg1 ;
-(void)rowDidChangeImage:(id)arg1 ;
-(void)rowDidReload:(id)arg1 ;
-(void)updateCellCharacteristics;
-(void)updateDisplayedContent;
@end

