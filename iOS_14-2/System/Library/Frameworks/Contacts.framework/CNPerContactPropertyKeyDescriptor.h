/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>
#import <libobjc.A.dylib/CNKeyDescriptor.h>

@class NSMutableDictionary, NSString;

@interface CNPerContactPropertyKeyDescriptor : NSObject <CNKeyDescriptor_Private, CNKeyDescriptor> {

	NSMutableDictionary* _propertiesByIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * propertiesByIdentifier;              //@synthesize propertiesByIdentifier=_propertiesByIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_cn_ignorableKeys;
-(id)_cn_requiredKeys;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_cn_optionalKeys;
-(NSMutableDictionary *)propertiesByIdentifier;
-(void)setPropertiesByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setKeysToFetch:(id)arg1 forContactIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

