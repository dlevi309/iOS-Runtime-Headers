/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString;

@interface SGPhoneNumber : SGLabeledObject {

	NSString* _phoneNumber;

}

@property (nonatomic,readonly) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)phoneNumber:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 recordId:(id)arg4 ;
+(id)phoneNumber:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 recordId:(id)arg4 origin:(id)arg5 ;
+(id)phoneNumber:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4 ;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithPhoneNumber:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4 ;
-(BOOL)isEqualToPhoneNumber:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

