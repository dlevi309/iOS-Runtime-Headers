/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

