/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>
#import <libobjc.A.dylib/MTConfigDelegate.h>

@protocol AMSBagProtocol;
@class NSString;

@interface MTConfigAMSMetricsDelegate : MTObject <MTConfigDelegate> {

	id<AMSBagProtocol> _bag;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                //@synthesize bag=_bag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sources;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithAMSBag:(id)arg1 ;
@end

