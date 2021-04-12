/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)stringContainsPhoneNumbers:(id)arg1 ;
+(id)phoneNumberWithPhoneNumberString:(id)arg1 ;
+(id)phoneNumberUtil;
+(id)phoneNumbersInString:(id)arg1 error:(id*)arg2 ;
+(id)phoneNumberWithTextCheckingResult:(id)arg1 ;
+(id)phoneNumberWithPhoneNumberString:(id)arg1 contactName:(id)arg2 label:(id)arg3 ;
-(NSString *)string;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)region;
-(NSString *)label;
-(NSString *)contactName;
-(NSString *)localizedLabel;
-(NSString *)formattedPhoneNumber;
-(NSString *)normalizedPhoneNumber;
-(NSString *)wfName;
-(id)wfSerializedRepresentation;
-(id)initWithPhoneNumberString:(id)arg1 contactName:(id)arg2 label:(id)arg3 ;
@end

