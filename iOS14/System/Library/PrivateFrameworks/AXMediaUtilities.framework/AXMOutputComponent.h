/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@interface AXMOutputComponent : NSObject {

	long long _componentState;

}

@property (assign,nonatomic) long long componentState;              //@synthesize componentState=_componentState - In the implementation block
+(BOOL)isSupported;
-(id)init;
-(BOOL)canHandleRequest:(id)arg1 ;
-(id)description;
-(void)setComponentState:(long long)arg1 ;
-(void)handleRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)componentState;
@end

