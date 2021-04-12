/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNPostalAddress;

@interface CNPropertyGroupPostalAddressItem : CNPropertyGroupItem

@property (nonatomic,readonly) CNPostalAddress * address; 
+(id)emptyValueForLabel:(id)arg1 ;
-(CNPostalAddress *)address;
-(id)defaultActionURL;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
-(id)normalizedValue;
-(id)bestValue:(id)arg1 ;
-(BOOL)_isMinimalAddress:(id)arg1 ;
@end

