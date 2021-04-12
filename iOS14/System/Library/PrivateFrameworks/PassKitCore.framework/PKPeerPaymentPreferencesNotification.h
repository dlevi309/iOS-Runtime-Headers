/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKPeerPaymentPreferencesNotification : NSObject <NSSecureCoding, NSCopying> {

	BOOL _value;
	NSString* _altDSID;
	unsigned long long _notificationType;

}

@property (nonatomic,copy) NSString * altDSID;                                 //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) unsigned long long notificationType;              //@synthesize notificationType=_notificationType - In the implementation block
@property (assign,nonatomic) BOOL value;                                       //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setNotificationType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setValue:(BOOL)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToPreferencesNotification:(id)arg1 ;
-(unsigned long long)notificationType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)value;
-(BOOL)isEqual:(id)arg1 ;
@end

