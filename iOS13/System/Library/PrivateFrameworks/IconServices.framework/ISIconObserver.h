/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <libobjc.A.dylib/ISIconManagerObserver.h>

@interface ISIconObserver : NSObject <ISIconManagerObserver> {

	id _delegate;

}

@property (__weak,readonly) id<ISIconObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<ISIconObserverDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)iconManager:(id)arg1 didInvalidateIcons:(id)arg2 ;
@end

