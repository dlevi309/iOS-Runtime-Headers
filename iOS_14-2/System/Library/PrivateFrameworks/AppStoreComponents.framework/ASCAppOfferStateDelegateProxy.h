/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <libobjc.A.dylib/ASCAppOfferStateDelegate.h>

@protocol ASCAppOfferStateDelegate;
@class NSString;

@interface ASCAppOfferStateDelegateProxy : NSObject <ASCAppOfferStateDelegate> {

	id<ASCAppOfferStateDelegate> _target;

}

@property (nonatomic,__weak,readonly) id<ASCAppOfferStateDelegate> target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTarget:(id)arg1 ;
-(id<ASCAppOfferStateDelegate>)target;
-(void)offer:(id)arg1 didChangeState:(id)arg2 withMetadata:(id)arg3 flags:(long long)arg4 ;
-(void)offer:(id)arg1 didChangeStatusText:(id)arg2 ;
@end

