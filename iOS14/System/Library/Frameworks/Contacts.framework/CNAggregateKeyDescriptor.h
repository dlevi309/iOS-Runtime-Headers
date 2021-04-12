/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPrivateDescription:(NSString *)arg1 ;
-(void)_cn_setUnauthorizedKeys:(id)arg1 ;
-(NSString *)privateDescription;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_cn_ignorableKeys;
-(id)initWithKeyDescriptors:(id)arg1 description:(id)arg2 ;
-(NSArray *)keyDescriptors;
-(CNContactKeyVector *)unauthorizedKeys;
-(NSString *)description;
-(void)setUnauthorizedKeys:(CNContactKeyVector *)arg1 ;
-(id)_cn_requiredKeys;
-(id)_cn_unauthorizedKeys;
-(id)_recursiveDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_cn_recursiveDescriptionWithPrefix:(id)arg1 ;
-(id)_cn_optionalKeys;
-(void)setKeyDescriptors:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

