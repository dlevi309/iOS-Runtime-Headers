/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSString;


@protocol ACFLocalAuthenticationContextProtocol <NSObject>
@property (nonatomic,copy) NSString * localizedReason; 
@property (nonatomic,copy) NSString * localizedFallbackTitle; 
@required
-(BOOL)canEvaluatePolicy:(long long)arg1 error:(id*)arg2;
-(NSString *)localizedFallbackTitle;
-(void)setLocalizedReason:(id)arg1;
-(void)reset;
-(void)setLocalizedFallbackTitle:(id)arg1;
-(NSString *)localizedReason;
-(void)evaluatePolicy:(long long)arg1 completion:(/*^block*/id)arg2;

@end

