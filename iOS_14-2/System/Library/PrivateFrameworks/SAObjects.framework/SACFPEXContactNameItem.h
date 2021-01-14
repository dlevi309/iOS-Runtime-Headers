/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SACFPEXItem.h>

@class SAPerson;

@interface SACFPEXContactNameItem : SACFPEXItem

@property (nonatomic,retain) SAPerson * person; 
+(id)contactNameItem;
+(id)contactNameItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAPerson *)person;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setPerson:(SAPerson *)arg1 ;
@end

