/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NEFilterFlow;

@interface NEFilterReport : NSObject <NSSecureCoding, NSCopying> {

	NEFilterFlow* _flow;
	long long _action;
	long long _event;
	unsigned long long _bytesInboundCount;
	unsigned long long _bytesOutboundCount;

}

@property (copy) NEFilterFlow * flow;                                  //@synthesize flow=_flow - In the implementation block
@property (assign) long long action;                                   //@synthesize action=_action - In the implementation block
@property (assign) unsigned long long bytesInboundCount;               //@synthesize bytesInboundCount=_bytesInboundCount - In the implementation block
@property (assign) unsigned long long bytesOutboundCount;              //@synthesize bytesOutboundCount=_bytesOutboundCount - In the implementation block
@property (readonly) long long event;                                  //@synthesize event=_event - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)action;
-(long long)event;
-(void)setAction:(long long)arg1 ;
-(NEFilterFlow *)flow;
-(void)setFlow:(NEFilterFlow *)arg1 ;
-(id)initWithFlow:(id)arg1 action:(long long)arg2 event:(long long)arg3 ;
-(unsigned long long)bytesInboundCount;
-(unsigned long long)bytesOutboundCount;
-(void)setBytesInboundCount:(unsigned long long)arg1 ;
-(void)setBytesOutboundCount:(unsigned long long)arg1 ;
@end

