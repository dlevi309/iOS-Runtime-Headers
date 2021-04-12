/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>

@class NSData, NSString;

@interface BKSHIDEventAuthenticationKey : NSObject <NSSecureCoding, BSProtobufSerializable> {

	NSData* _keyData;
	SCD_Struct_BK9 _hmacContext;
	atomic_flag _hmacInitialized;
	long long _generation;

}

@property (nonatomic,readonly) long long generation;                //@synthesize generation=_generation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
+(id)eventAuthenticationKey;
+(id)eventAuthenticationKeyWithKeyBuffer:(char*)arg1 length:(unsigned long long)arg2 ;
-(long long)generation;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
@end

