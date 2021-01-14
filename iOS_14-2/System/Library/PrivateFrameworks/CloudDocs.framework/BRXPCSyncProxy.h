/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <Foundation/NSProxy.h>

@class NSObject, NSError;

@interface BRXPCSyncProxy : NSProxy {

	NSObject* _target;
	NSError* _error;
	id _result;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id result;                    //@synthesize result=_result - In the implementation block
-(void)setResult:(id)arg1 ;
-(id)initWithXPCObject:(id)arg1 ;
-(void)setBoolResult:(BOOL)arg1 error:(id)arg2 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setObjResult:(id)arg1 error:(id)arg2 ;
-(id)result;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

