/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

