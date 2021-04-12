/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <libobjc.A.dylib/ISIconManagerObserver.h>

@interface ISIconObserver : NSObject <ISIconManagerObserver> {

	id _delegate;

}

@property (__weak,readonly) id<ISIconObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ISIconObserverDelegate>)delegate;
-(void)iconManager:(id)arg1 didInvalidateIcons:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
@end

