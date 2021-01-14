/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long selectedIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(unsigned long long)numberOfItems;
-(NSArray *)items;
-(NSString *)formattedName;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)supportsSelection;
-(id)sectionHeaderLabel;
-(id)sectionFooterLabel;
-(id)itemForIndex:(unsigned long long)arg1 ;
-(void)setFormattedName:(NSString *)arg1 ;
@end

