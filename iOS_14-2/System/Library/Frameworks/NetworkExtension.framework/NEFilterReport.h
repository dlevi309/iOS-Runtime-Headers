/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (retain) NEFilterFlow * flow;                                //@synthesize flow=_flow - In the implementation block
@property (assign) long long action;                                   //@synthesize action=_action - In the implementation block
@property (assign) unsigned long long bytesInboundCount;               //@synthesize bytesInboundCount=_bytesInboundCount - In the implementation block
@property (assign) unsigned long long bytesOutboundCount;              //@synthesize bytesOutboundCount=_bytesOutboundCount - In the implementation block
@property (readonly) long long event;                                  //@synthesize event=_event - In the implementation block
+(BOOL)supportsSecureCoding;
-(NEFilterFlow *)flow;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(long long)event;
-(void)setFlow:(NEFilterFlow *)arg1 ;
-(id)initWithFlow:(id)arg1 action:(long long)arg2 event:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)bytesInboundCount;
-(unsigned long long)bytesOutboundCount;
-(void)setBytesInboundCount:(unsigned long long)arg1 ;
-(void)setBytesOutboundCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

