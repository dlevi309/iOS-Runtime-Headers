/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
*/

#import <GenerationalStorage/GenerationalStorage-Structs.h>
#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/GSProtocol.h>

@protocol GSProtocol;
@class NSObject, NSError;

@interface GSDaemonProxySync : NSProxy <GSProtocol> {

	NSObject*<GSProtocol> _target;
	NSError* _error;
	id _result;

}

@property (nonatomic,retain) id result;                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)proxy;
-(void)setResult:(id)arg1 ;
-(id)initWithXPCObject:(id)arg1 ;
-(void)finalize;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)result;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)handleObjResult:(id)arg1 error:(id)arg2 ;
-(void)handleBoolResult:(BOOL)arg1 error:(id)arg2 ;
-(CFErrorRef)copyCFError;
@end

