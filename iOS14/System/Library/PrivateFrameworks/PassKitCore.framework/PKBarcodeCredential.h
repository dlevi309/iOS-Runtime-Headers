/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, PKEncryptedDataObject;

@interface PKBarcodeCredential : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSDate* _expirationTimestamp;
	PKEncryptedDataObject* _value;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDate * expirationTimestamp;                 //@synthesize expirationTimestamp=_expirationTimestamp - In the implementation block
@property (nonatomic,retain) PKEncryptedDataObject * value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setValue:(PKEncryptedDataObject *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSDate *)expirationTimestamp;
-(PKEncryptedDataObject *)value;
-(void)setExpirationTimestamp:(NSDate *)arg1 ;
@end

