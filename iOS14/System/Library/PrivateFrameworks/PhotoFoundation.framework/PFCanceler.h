/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <libobjc.A.dylib/PFCanceler.h>

@protocol PFCanceler <NSObject>
@required
-(BOOL)isCanceled;
-(void)cancel;

@end


@protocol OS_dispatch_queue, PFCancelerObserverMulticaster;
@class NSObject, PFAsyncDispatchMulticaster, NSString;

@interface PFCanceler : NSObject <PFCanceler> {

	NSObject*<OS_dispatch_queue> _serializer;
	BOOL _isCanceled;
	PFAsyncDispatchMulticaster*<PFCancelerObserverMulticaster> _multicaster;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsNotifyOnCancel;
-(void)addObserver:(id)arg1 ;
-(BOOL)isCanceled;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)cancel;
@end

