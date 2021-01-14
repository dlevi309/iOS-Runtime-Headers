/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFFieldNotification.h>

@interface NFFieldNotificationECP1_0 : NFFieldNotification {

	BOOL _odaRequired;
	unsigned _terminalMode;
	unsigned _terminalType;

}

@property (readonly) BOOL odaRequired;                   //@synthesize odaRequired=_odaRequired - In the implementation block
@property (readonly) unsigned terminalMode;              //@synthesize terminalMode=_terminalMode - In the implementation block
@property (readonly) unsigned terminalType;              //@synthesize terminalType=_terminalType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)terminalType;
-(BOOL)odaRequired;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)terminalMode;
@end

