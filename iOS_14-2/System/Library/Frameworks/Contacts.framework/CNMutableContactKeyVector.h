/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContactKeyVector.h>

@interface CNMutableContactKeyVector : CNContactKeyVector
+(id)new;
+(id)freezeIfClassIsImmutable:(id)arg1 ;
-(id)freeze;
-(id)init;
-(void)addKey:(id)arg1 ;
-(void)subtractKeys:(id)arg1 ;
-(void)unionKeyVector:(id)arg1 ;
-(id)initWithKeyVector:(id)arg1 ;
-(void)minusKeyVector:(id)arg1 ;
-(void)intersectKeyVector:(id)arg1 ;
-(void)subtractKey:(id)arg1 ;
-(void)addKeys:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

