/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TKSmartCardUserInteractionDelegate;
@interface TKSmartCardUserInteraction : NSObject <NSSecureCoding> {

	id<TKSmartCardUserInteractionDelegate> _delegate;
	double _initialTimeout;
	double _interactionTimeout;

}

@property (__weak) id<TKSmartCardUserInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double initialTimeout;                                        //@synthesize initialTimeout=_initialTimeout - In the implementation block
@property (assign) double interactionTimeout;                                    //@synthesize interactionTimeout=_interactionTimeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id<TKSmartCardUserInteractionDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TKSmartCardUserInteractionDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(double)initialTimeout;
-(void)setInitialTimeout:(double)arg1 ;
-(double)interactionTimeout;
-(void)setInteractionTimeout:(double)arg1 ;
-(BOOL)cancel;
@end

