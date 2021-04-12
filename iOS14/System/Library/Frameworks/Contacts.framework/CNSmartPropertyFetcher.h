/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>

@class NSString;

@interface CNSmartPropertyFetcher : NSObject <CNKeyDescriptor_Private>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_cn_ignorableKeys;
-(id)_cn_requiredKeys;
-(id)initWithCoder:(id)arg1 ;
-(id)_cn_optionalKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

