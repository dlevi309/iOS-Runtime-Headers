/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSNumber, NSDictionary;

@interface PKAccessoryDevice : NSObject <NSCopying, NSSecureCoding> {

	NSString* _endpointUUID;
	NSData* _primaryColorData;
	NSData* _secondaryColorData;
	NSNumber* _type;
	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSString * endpointUUID;                  //@synthesize endpointUUID=_endpointUUID - In the implementation block
@property (nonatomic,readonly) NSData * primaryColorData;                //@synthesize primaryColorData=_primaryColorData - In the implementation block
@property (nonatomic,readonly) NSData * secondaryColorData;              //@synthesize secondaryColorData=_secondaryColorData - In the implementation block
@property (nonatomic,readonly) NSNumber * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary;                //@synthesize dictionary=_dictionary - In the implementation block
@property (getter=isSleeve,nonatomic,readonly) BOOL sleeve; 
+(BOOL)supportsSecureCoding;
-(id)accessoryTypeString;
-(NSData *)primaryColorData;
-(NSData *)secondaryColorData;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isSleeve;
-(id)description;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 endpointUUID:(id)arg2 ;
-(NSNumber *)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)endpointUUID;
@end

