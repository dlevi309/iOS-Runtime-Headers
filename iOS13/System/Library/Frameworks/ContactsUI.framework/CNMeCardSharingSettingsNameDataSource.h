/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNMeCardSharingSectionDataSource.h>

@class CNContact, NSArray, NSString;

@interface CNMeCardSharingSettingsNameDataSource : NSObject <CNMeCardSharingSectionDataSource> {

	CNContact* _contact;
	NSArray* _items;
	NSString* _formattedName;

}

@property (nonatomic,retain) CNContact * contact;                             //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSArray * items;                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * formattedName;                        //@synthesize formattedName=_formattedName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long selectedIndex; 
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)formattedName;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(unsigned long long)numberOfItems;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)supportsSelection;
-(id)sectionHeaderLabel;
-(id)sectionFooterLabel;
-(id)itemForIndex:(unsigned long long)arg1 ;
-(void)setFormattedName:(NSString *)arg1 ;
@end

