/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFEmailAddress : NSObject <NSCopying, WFNaming, WFSerializableContent, NSSecureCoding> {

	NSString* _address;
	NSString* _label;

}

@property (nonatomic,readonly) NSString * address;                     //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * localizedLabel; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)addressWithEmailAddress:(id)arg1 ;
+(id)emailAddressesInString:(id)arg1 error:(id*)arg2 ;
+(BOOL)stringContainsEmailAddresses:(id)arg1 ;
+(id)addressesWithTextCheckingResult:(id)arg1 ;
+(id)addressesWithMailtoURL:(id)arg1 ;
+(id)addressWithEmailAddress:(id)arg1 label:(id)arg2 ;
-(long long)compare:(id)arg1 ;
-(NSString *)localizedLabel;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)wfName;
-(NSString *)address;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(id)wfSerializedRepresentation;
-(id)initWithAddress:(id)arg1 label:(id)arg2 ;
@end

