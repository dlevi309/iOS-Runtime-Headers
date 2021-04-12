/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SACFPEXItem.h>

@class SAPerson;

@interface SACFPEXContactNameItem : SACFPEXItem

@property (nonatomic,retain) SAPerson * person; 
+(id)contactNameItem;
+(id)contactNameItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAPerson *)person;
-(void)setPerson:(SAPerson *)arg1 ;
-(id)encodedClassName;
@end

