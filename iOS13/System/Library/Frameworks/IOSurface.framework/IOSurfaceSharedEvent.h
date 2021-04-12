/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)setSignaledValue:(unsigned long long)arg1 ;
-(unsigned long long)signaledValue;
-(unsigned)eventPort;
-(unsigned long long)globalTraceObjectID;
@end

