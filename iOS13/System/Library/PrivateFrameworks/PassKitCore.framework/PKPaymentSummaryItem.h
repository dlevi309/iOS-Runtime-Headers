/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber;

@interface PKPaymentSummaryItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _useDarkColor;
	NSString* _label;
	NSDecimalNumber* _amount;
	unsigned long long _type;
	NSString* _localizedAmount;

}

@property (nonatomic,retain) NSString * localizedAmount;              //@synthesize localizedAmount=_localizedAmount - In the implementation block
@property (assign,nonatomic) BOOL useDarkColor;                       //@synthesize useDarkColor=_useDarkColor - In the implementation block
@property (nonatomic,copy) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                  //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) unsigned long long type;                 //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)version;
+(id)summaryItemWithLabel:(id)arg1 amount:(id)arg2 ;
+(id)summaryItemWithLabel:(id)arg1 amount:(id)arg2 type:(unsigned long long)arg3 ;
+(id)itemWithProtobuf:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)protobuf;
-(void)setLocalizedAmount:(NSString *)arg1 ;
-(void)setUseDarkColor:(BOOL)arg1 ;
-(BOOL)isEqualToPaymentSummaryItem:(id)arg1 ;
-(NSString *)localizedAmount;
-(BOOL)useDarkColor;
@end

