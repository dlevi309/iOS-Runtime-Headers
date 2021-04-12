/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFFieldNotification.h>

@class NSArray, NSData;

@interface NFFieldNotificationECP2_0 : NFFieldNotification {

	BOOL _odaRequired;
	unsigned char _terminalSubType;
	unsigned long long _terminalType;
	NSArray* _tciArray;
	NSData* _openLoopSchemeBitfield;
	NSData* _homeKitSchemeDataPayload;

}

@property (readonly) BOOL odaRequired;                                      //@synthesize odaRequired=_odaRequired - In the implementation block
@property (readonly) unsigned long long terminalType;                       //@synthesize terminalType=_terminalType - In the implementation block
@property (readonly) unsigned char terminalSubType;                         //@synthesize terminalSubType=_terminalSubType - In the implementation block
@property (retain,readonly) NSArray * tciArray;                             //@synthesize tciArray=_tciArray - In the implementation block
@property (retain,readonly) NSData * openLoopSchemeBitfield;                //@synthesize openLoopSchemeBitfield=_openLoopSchemeBitfield - In the implementation block
@property (retain,readonly) NSData * homeKitSchemeDataPayload;              //@synthesize homeKitSchemeDataPayload=_homeKitSchemeDataPayload - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)tciArray;
-(unsigned long long)terminalType;
-(BOOL)odaRequired;
-(unsigned char)terminalSubType;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)openLoopSchemeBitfield;
-(NSData *)homeKitSchemeDataPayload;
@end

