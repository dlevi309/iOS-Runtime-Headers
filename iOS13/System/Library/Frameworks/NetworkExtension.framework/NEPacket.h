/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NEFlowMetaData, NEFilterPacketInterpose;

@interface NEPacket : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _protocolFamily;
	NSData* _data;
	long long _direction;
	NEFlowMetaData* _metadata;
	void* _context;
	NEFilterPacketInterpose* _interpose;

}

@property (assign) void* context;                                    //@synthesize context=_context - In the implementation block
@property (retain) NEFilterPacketInterpose * interpose;              //@synthesize interpose=_interpose - In the implementation block
@property (copy,readonly) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (readonly) unsigned char protocolFamily;                   //@synthesize protocolFamily=_protocolFamily - In the implementation block
@property (readonly) long long direction;                            //@synthesize direction=_direction - In the implementation block
@property (readonly) NEFlowMetaData * metadata;                      //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(NEFlowMetaData *)metadata;
-(long long)direction;
-(NEFilterPacketInterpose *)interpose;
-(void)setInterpose:(NEFilterPacketInterpose *)arg1 ;
-(id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2 metadata:(id)arg3 ;
-(unsigned char)protocolFamily;
-(id)initWithData:(id)arg1 direction:(long long)arg2 context:(void*)arg3 interpose:(id)arg4 ;
-(id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2 signingIdentifier:(id)arg3 processUUID:(id)arg4 ;
-(id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2 ;
@end

