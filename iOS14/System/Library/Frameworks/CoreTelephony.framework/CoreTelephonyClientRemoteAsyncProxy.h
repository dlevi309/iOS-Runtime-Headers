/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithXPCObject:(id)arg1 userQueue:(queue*)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

