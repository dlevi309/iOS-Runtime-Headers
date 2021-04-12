/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@interface ICChecklistInfo : NSObject {

	unsigned long long _numberOfItems;
	unsigned long long _numberOfCheckedItems;
	unsigned long long _numberOfUncheckedItems;

}

@property (assign,nonatomic) unsigned long long numberOfItems;                       //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCheckedItems;                //@synthesize numberOfCheckedItems=_numberOfCheckedItems - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfUncheckedItems;              //@synthesize numberOfUncheckedItems=_numberOfUncheckedItems - In the implementation block
-(unsigned long long)numberOfItems;
-(void)setNumberOfItems:(unsigned long long)arg1 ;
-(unsigned long long)numberOfCheckedItems;
-(void)setNumberOfCheckedItems:(unsigned long long)arg1 ;
-(unsigned long long)numberOfUncheckedItems;
-(void)setNumberOfUncheckedItems:(unsigned long long)arg1 ;
@end

