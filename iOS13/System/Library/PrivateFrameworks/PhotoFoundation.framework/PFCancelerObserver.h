/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <libobjc.A.dylib/PFCancelerObserver.h>

@protocol PFCancelerObserver
@required
-(void)cancelerWasCanceled:(id)arg1;

@end


@interface PFCancelerObserver : NSObject <PFCancelerObserver> {

	/*^block*/id _block;

}
+(id)observerForCanceler:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)init;
-(void)cancelerWasCanceled:(id)arg1 ;
-(id)initWithCanceler:(id)arg1 block:(/*^block*/id)arg2 ;
@end

