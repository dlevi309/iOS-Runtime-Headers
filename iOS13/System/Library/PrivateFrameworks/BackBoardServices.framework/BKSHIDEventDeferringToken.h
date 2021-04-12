/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying> {

	unsigned _CAContextID;
	NSString* _stringIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
+(id)tokenForString:(id)arg1 ;
+(id)tokenForIdentifierOfCAContext:(unsigned)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_string;
-(id)_initWithIdentifier:(unsigned)arg1 ;
-(id)initForProtobufDecoding;
-(id)didFinishProtobufDecodingWithError:(out id*)arg1 ;
-(id)_initWithString:(id)arg1 ;
-(BOOL)_isIdentifierOfCAContext;
-(unsigned)_identifierOfCAContext;
-(BOOL)_isString;
@end

