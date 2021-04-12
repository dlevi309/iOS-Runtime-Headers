/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSString;

@interface WFEmailAddress : NSObject <NSCopying, WFNaming, WFSerializableContent> {

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
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(BOOL)stringContainsEmailAddresses:(id)arg1 ;
+(id)addressWithEmailAddress:(id)arg1 ;
+(id)emailAddressesInString:(id)arg1 error:(id*)arg2 ;
+(id)addressesWithTextCheckingResult:(id)arg1 ;
+(id)addressesWithMailtoURL:(id)arg1 ;
+(id)addressWithEmailAddress:(id)arg1 label:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSString *)address;
-(NSString *)label;
-(NSString *)localizedLabel;
-(NSString *)wfName;
-(id)wfSerializedRepresentation;
-(id)initWithAddress:(id)arg1 label:(id)arg2 ;
@end

