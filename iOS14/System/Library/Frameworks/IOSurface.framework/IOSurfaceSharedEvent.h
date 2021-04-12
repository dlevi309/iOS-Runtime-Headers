/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IOSurfaceSharedEvent : NSObject <NSSecureCoding> {

	unsigned _eventPort;
	unsigned long long _globalTraceObjectID;

}

@property (assign) unsigned long long signaledValue; 
@property (readonly) unsigned eventPort;                                  //@synthesize eventPort=_eventPort - In the implementation block
@property (readonly) unsigned long long globalTraceObjectID;              //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)globalTraceObjectID;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(unsigned)eventPort;
-(unsigned long long)signaledValue;
-(void)setSignaledValue:(unsigned long long)arg1 ;
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

