/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NFApplet;

@interface NFContactlessPaymentStartEvent : NSObject <NSSecureCoding> {

	NSString* _appletIdentifier;
	NSString* _keyIdentifier;
	BOOL _background;
	unsigned short _selectStatus;
	unsigned short _paymentMode;
	NFApplet* _applet;
	NSString* _spIdentifier;

}

@property (nonatomic,retain,readonly) NFApplet * applet;                     //@synthesize applet=_applet - In the implementation block
@property (nonatomic,retain,readonly) NSString * keyIdentifier; 
@property (nonatomic,readonly) unsigned short selectStatus;                  //@synthesize selectStatus=_selectStatus - In the implementation block
@property (nonatomic,readonly) unsigned short paymentMode;                   //@synthesize paymentMode=_paymentMode - In the implementation block
@property (nonatomic,retain,readonly) NSString * spIdentifier;               //@synthesize spIdentifier=_spIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL background;                              //@synthesize background=_background - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)background;
-(id)asDictionary;
-(NFApplet *)applet;
-(unsigned short)paymentMode;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setKeyIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyIdentifier;
-(id)appletIdentifier;
-(void)_setApplet:(id)arg1 ;
-(unsigned short)selectStatus;
-(NSString *)spIdentifier;
@end

