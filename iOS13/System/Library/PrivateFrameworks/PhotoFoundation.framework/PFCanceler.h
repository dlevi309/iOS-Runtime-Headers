/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <libobjc.A.dylib/PFCanceler.h>

@protocol PFCanceler <NSObject>
@required
-(void)cancel;
-(BOOL)isCanceled;

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
-(id)init;
-(void)cancel;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isCanceled;
@end

