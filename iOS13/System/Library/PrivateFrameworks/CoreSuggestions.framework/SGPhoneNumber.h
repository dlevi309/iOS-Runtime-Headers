/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString;

@interface SGPhoneNumber : SGLabeledObject {

	NSString* _phoneNumber;

}

@property (nonatomic,readonly) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)phoneNumber:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4 ;
+(id)phoneNumber:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 recordId:(id)arg4 origin:(id)arg5 ;
+(id)phoneNumber:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 recordId:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)phoneNumber;
-(id)initWithPhoneNumber:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4 ;
-(BOOL)isEqualToPhoneNumber:(id)arg1 ;
@end

