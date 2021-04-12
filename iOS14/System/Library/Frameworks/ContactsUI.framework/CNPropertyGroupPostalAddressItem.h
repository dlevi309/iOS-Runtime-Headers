/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNPostalAddress;

@interface CNPropertyGroupPostalAddressItem : CNPropertyGroupItem

@property (nonatomic,readonly) CNPostalAddress * address; 
+(id)emptyValueForLabel:(id)arg1 ;
-(id)normalizedValue;
-(id)defaultActionURL;
-(BOOL)_isMinimalAddress:(id)arg1 ;
-(CNPostalAddress *)address;
-(id)bestValue:(id)arg1 ;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
@end

