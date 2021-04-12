/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContactKeyVector.h>

@interface CNMutableContactKeyVector : CNContactKeyVector
+(id)new;
+(id)freezeIfClassIsImmutable:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)freeze;
-(void)addKey:(id)arg1 ;
-(void)unionKeyVector:(id)arg1 ;
-(id)initWithKeyVector:(id)arg1 ;
-(void)addKeys:(id)arg1 ;
-(void)minusKeyVector:(id)arg1 ;
-(void)intersectKeyVector:(id)arg1 ;
-(void)subtractKey:(id)arg1 ;
-(void)subtractKeys:(id)arg1 ;
@end

