/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNInstantMessageAddress;

@interface CNPropertyGroupInstantMessageItem : CNPropertyGroupItem

@property (nonatomic,readonly) CNInstantMessageAddress * imAddress; 
+(id)emptyValueForLabel:(id)arg1 ;
-(id)defaultActionURL;
-(CNInstantMessageAddress *)imAddress;
-(id)displayLabel;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 ;
-(id)valueForDisplayString:(id)arg1 ;
-(id)editingStringValue;
@end

