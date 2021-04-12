/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>

@class NSArray, NSString;

@interface CNTestSmartFetcher : NSObject <CNKeyDescriptor_Private> {

	NSArray* _requiredKeys;
	NSArray* _optionalKeys;

}

@property (nonatomic,readonly) NSArray * requiredKeys;              //@synthesize requiredKeys=_requiredKeys - In the implementation block
@property (nonatomic,readonly) NSArray * optionalKeys;              //@synthesize optionalKeys=_optionalKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_cn_ignorableKeys;
-(NSArray *)requiredKeys;
-(id)_cn_requiredKeys;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)optionalKeys;
-(id)_cn_optionalKeys;
-(id)initWithRequiredKeys:(id)arg1 optionalKeys:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

