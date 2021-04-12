/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@interface AXMOutputComponent : NSObject {

	long long _componentState;

}

@property (assign,nonatomic) long long componentState;              //@synthesize componentState=_componentState - In the implementation block
+(BOOL)isSupported;
-(id)init;
-(id)description;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)handleRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setComponentState:(long long)arg1 ;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)componentState;
@end

