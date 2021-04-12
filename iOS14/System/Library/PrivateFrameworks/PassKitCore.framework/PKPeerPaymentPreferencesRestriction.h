/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKPeerPaymentPreferencesRestriction : NSObject <NSSecureCoding, NSCopying> {

	NSString* _altDSID;
	unsigned long long _restrictionType;

}

@property (nonatomic,copy) NSString * altDSID;                                //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) unsigned long long restrictionType;              //@synthesize restrictionType=_restrictionType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)restrictionType;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setRestrictionType:(unsigned long long)arg1 ;
-(BOOL)isEqualToPreferencesRestriction:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

