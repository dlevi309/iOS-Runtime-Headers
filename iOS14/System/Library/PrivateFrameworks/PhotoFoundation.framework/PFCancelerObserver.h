/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

