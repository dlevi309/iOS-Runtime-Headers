/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BKSHIDEventDisplay : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying> {

	BOOL _builtin;
	NSString* _hardwareIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)builtinDisplay;
+(id)nullDisplay;
+(id)protobufSchema;
+(id)displayWithHardwareIdentifier:(id)arg1 ;
-(id)init;
-(BOOL)_isNullDisplay;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_hardwareIdentifier;
-(NSString *)description;
-(id)initForProtobufDecoding;
-(id)_initWithHardwareIdentifier:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isBuiltinDisplay;
-(BOOL)isEqual:(id)arg1 ;
@end

