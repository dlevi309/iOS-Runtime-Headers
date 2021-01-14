/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/BSDescriptionStreamable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class BKSHIDEventDeferringToken, NSString;

@interface BKSHIDEventDeferringTarget : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying> {

	int _pid;
	BKSHIDEventDeferringToken* _token;

}

@property (nonatomic,readonly) int pid;                                             //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringToken * token;              //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
-(int)pid;
-(id)init;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithPID:(int)arg1 token:(id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)initForProtobufDecoding;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BKSHIDEventDeferringToken *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

