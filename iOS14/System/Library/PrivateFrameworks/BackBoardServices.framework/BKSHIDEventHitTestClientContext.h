/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString;

@interface BKSHIDEventHitTestClientContext : NSObject <BSProtobufSerializable, BSXPCSecureCoding> {

	int _pid;
	unsigned _contextID;

}

@property (assign,nonatomic) int pid;                               //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) unsigned contextID;                    //@synthesize contextID=_contextID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protobufSchema;
+(BOOL)supportsBSXPCSecureCoding;
-(int)pid;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(NSString *)description;
-(void)setContextID:(unsigned)arg1 ;
-(unsigned)contextID;
-(void)setPid:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

