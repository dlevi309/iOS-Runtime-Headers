/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNSharingProfileSectionDataSource <NSObject>
@property (nonatomic,readonly) unsigned long long selectedIndex; 
@optional
-(unsigned long long)selectedIndex;

@required
-(unsigned long long)numberOfItems;
-(void)didSelectItemAtIndex:(unsigned long long)arg1;
-(BOOL)supportsSelection;
-(id)sectionHeaderLabel;
-(id)sectionFooterLabel;
-(id)itemForIndex:(unsigned long long)arg1;

@end

