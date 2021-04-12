/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>

@class NSArray, NSString, CNContactKeyVector;

@interface CNAggregateKeyDescriptor : NSObject <CNKeyDescriptor_Private> {

	NSArray* _keyDescriptors;
	NSString* _privateDescription;
	CNContactKeyVector* _unauthorizedKeys;

}

@property (nonatomic,copy) NSArray * keyDescriptors;                             //@synthesize keyDescriptors=_keyDescriptors - In the implementation block
@property (nonatomic,copy) NSString * privateDescription;                        //@synthesize privateDescription=_privateDescription - In the implementation block
@property (nonatomic,retain) CNContactKeyVector * unauthorizedKeys;              //@synthesize unauthorizedKeys=_unauthorizedKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyDescriptorWithKeyDescriptors:(id)arg1 description:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)privateDescription;
-(id)_cn_requiredKeys;
-(id)_cn_optionalKeys;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)_cn_ignorableKeys;
-(id)_cn_recursiveDescriptionWithPrefix:(id)arg1 ;
-(id)_cn_unauthorizedKeys;
-(void)_cn_setUnauthorizedKeys:(id)arg1 ;
-(id)initWithKeyDescriptors:(id)arg1 description:(id)arg2 ;
-(void)setKeyDescriptors:(NSArray *)arg1 ;
-(void)setPrivateDescription:(NSString *)arg1 ;
-(NSArray *)keyDescriptors;
-(CNContactKeyVector *)unauthorizedKeys;
-(void)setUnauthorizedKeys:(CNContactKeyVector *)arg1 ;
-(id)_recursiveDescription;
@end

