/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NFApplet;

@interface NFContactlessPaymentStartEvent : NSObject <NSSecureCoding> {

	NSString* _appletIdentifier;
	NSString* _keyIdentifier;
	unsigned short _selectStatus;
	unsigned short _paymentMode;
	NFApplet* _applet;
	NSString* _spIdentifier;

}

@property (nonatomic,readonly) NFApplet * applet;                        //@synthesize applet=_applet - In the implementation block
@property (nonatomic,readonly) NSString * keyIdentifier; 
@property (nonatomic,readonly) unsigned short selectStatus;              //@synthesize selectStatus=_selectStatus - In the implementation block
@property (nonatomic,readonly) unsigned short paymentMode;               //@synthesize paymentMode=_paymentMode - In the implementation block
@property (nonatomic,readonly) NSString * spIdentifier;                  //@synthesize spIdentifier=_spIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)keyIdentifier;
-(unsigned short)paymentMode;
-(id)asDictionary;
-(NFApplet *)applet;
-(id)appletIdentifier;
-(void)_setApplet:(id)arg1 ;
-(void)setKeyIdentifier:(NSString *)arg1 ;
-(unsigned short)selectStatus;
-(NSString *)spIdentifier;
@end

