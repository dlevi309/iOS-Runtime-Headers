/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)result;
-(void)setResult:(id)arg1 ;
-(void)setObjResult:(id)arg1 error:(id)arg2 ;
-(void)setBoolResult:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithXPCObject:(id)arg1 ;
@end

