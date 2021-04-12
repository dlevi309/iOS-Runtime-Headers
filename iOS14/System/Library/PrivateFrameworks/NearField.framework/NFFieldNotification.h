/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NFFieldNotification : NSObject <NSSecureCoding> {

	unsigned short _typeFSystemCode;
	unsigned _rfTechnology;
	unsigned long long _notificationType;

}

@property (readonly) unsigned long long notificationType;              //@synthesize notificationType=_notificationType - In the implementation block
@property (readonly) unsigned rfTechnology;                            //@synthesize rfTechnology=_rfTechnology - In the implementation block
@property (readonly) unsigned short typeFSystemCode;                   //@synthesize typeFSystemCode=_typeFSystemCode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)notificationWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setNotificationType:(unsigned long long)arg1 ;
-(unsigned)rfTechnology;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)notificationType;
-(unsigned short)typeFSystemCode;
@end

