/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNInstantMessageAddress;

@interface CNPropertyGroupInstantMessageItem : CNPropertyGroupItem

@property (nonatomic,readonly) CNInstantMessageAddress * imAddress; 
+(id)emptyValueForLabel:(id)arg1 ;
-(CNInstantMessageAddress *)imAddress;
-(id)defaultActionURL;
-(id)displayLabel;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 ;
-(id)valueForDisplayString:(id)arg1 ;
-(id)editingStringValue;
@end

