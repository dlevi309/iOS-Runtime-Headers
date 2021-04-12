/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFCancelable.h>

@class EFFuture, NSString;

@interface EFPromise : NSObject <EFCancelable> {

	EFFuture* _future;

}

@property (readonly) EFFuture * future;                             //@synthesize future=_future - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)promise;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(EFFuture *)future;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)cancel;
@end

