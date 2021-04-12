/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class PKPassView, PKPass;

@interface PKPassFooterViewConfiguration : NSObject {

	PKPassView* _passView;
	long long _state;

}

@property (nonatomic,readonly) PKPassView * passView;              //@synthesize passView=_passView - In the implementation block
@property (nonatomic,readonly) long long state;                    //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) PKPass * pass; 
-(PKPassView *)passView;
-(id)init;
-(PKPass *)pass;
-(unsigned long long)hash;
-(id)initWithPassView:(id)arg1 state:(long long)arg2 ;
-(long long)state;
-(BOOL)isEqual:(id)arg1 ;
@end

