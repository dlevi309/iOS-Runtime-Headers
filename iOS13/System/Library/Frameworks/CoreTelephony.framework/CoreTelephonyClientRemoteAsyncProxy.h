/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/CTXPCServiceInterface.h>

@protocol CTXPCServiceInterface;
@class NSObject, NSString;

@interface CoreTelephonyClientRemoteAsyncProxy : NSProxy <CTXPCServiceInterface> {

	NSObject*<CTXPCServiceInterface> _target;
	queue* _userQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithXPCObject:(id)arg1 userQueue:(queue*)arg2 errorHandler:(/*^block*/id)arg3 ;
@end

