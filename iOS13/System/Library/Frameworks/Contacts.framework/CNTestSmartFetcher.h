/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)requiredKeys;
-(id)_cn_requiredKeys;
-(id)_cn_optionalKeys;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)_cn_ignorableKeys;
-(NSArray *)optionalKeys;
-(id)initWithRequiredKeys:(id)arg1 optionalKeys:(id)arg2 ;
@end

