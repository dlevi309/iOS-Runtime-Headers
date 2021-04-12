/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSString;

@interface WFPhoneNumber : NSObject <WFNaming, NSCopying, WFSerializableContent> {

	NSString* _string;
	NSString* _contactName;
	NSString* _label;

}

@property (nonatomic,readonly) NSString * string;                             //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * formattedPhoneNumber; 
@property (nonatomic,readonly) NSString * normalizedPhoneNumber; 
@property (nonatomic,readonly) NSString * contactName;                        //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,readonly) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * localizedLabel; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)phoneNumberWithPhoneNumberString:(id)arg1 ;
+(id)phoneNumbersInString:(id)arg1 error:(id*)arg2 ;
+(BOOL)stringContainsPhoneNumbers:(id)arg1 ;
+(id)phoneNumberWithTextCheckingResult:(id)arg1 ;
+(id)phoneNumberWithPhoneNumberString:(id)arg1 contactName:(id)arg2 label:(id)arg3 ;
-(long long)compare:(id)arg1 ;
-(NSString *)localizedLabel;
-(NSString *)formattedPhoneNumber;
-(NSString *)contactName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)wfName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)normalizedPhoneNumber;
-(id)wfSerializedRepresentation;
-(id)initWithPhoneNumberString:(id)arg1 contactName:(id)arg2 label:(id)arg3 ;
@end

