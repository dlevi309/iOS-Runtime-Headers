/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NFTechnologyEvent : NSObject <NSSecureCoding> {

	unsigned char _valueAddedServiceMode;
	BOOL _vasSupported;
	BOOL _touchIDRequired;
	unsigned short _systemCode;
	unsigned _technology;
	unsigned _terminalType;

}

@property (nonatomic,readonly) unsigned technology;                              //@synthesize technology=_technology - In the implementation block
@property (nonatomic,readonly) unsigned char valueAddedServiceMode;              //@synthesize valueAddedServiceMode=_valueAddedServiceMode - In the implementation block
@property (nonatomic,readonly) unsigned short systemCode;                        //@synthesize systemCode=_systemCode - In the implementation block
@property (nonatomic,readonly) BOOL vasSupported;                                //@synthesize vasSupported=_vasSupported - In the implementation block
@property (nonatomic,readonly) BOOL touchIDRequired;                             //@synthesize touchIDRequired=_touchIDRequired - In the implementation block
@property (nonatomic,readonly) unsigned terminalType;                            //@synthesize terminalType=_terminalType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)technology;
-(unsigned short)systemCode;
-(unsigned)terminalType;
-(unsigned char)valueAddedServiceMode;
-(id)initWithTechnology:(unsigned)arg1 andValueAddedServiceMode:(unsigned)arg2 andSystemCode:(unsigned short)arg3 ;
-(id)initWithTechnology:(unsigned)arg1 andValueAddedServiceMode:(unsigned)arg2 ;
-(id)initWithFieldNotification:(id)arg1 ;
-(BOOL)vasSupported;
-(BOOL)touchIDRequired;
@end

