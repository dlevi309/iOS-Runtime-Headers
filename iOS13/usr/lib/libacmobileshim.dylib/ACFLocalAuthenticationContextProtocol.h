/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSString;


@protocol ACFLocalAuthenticationContextProtocol <NSObject>
@property (nonatomic,copy) NSString * localizedReason; 
@property (nonatomic,copy) NSString * localizedFallbackTitle; 
@required
-(void)reset;
-(BOOL)canEvaluatePolicy:(long long)arg1 error:(id*)arg2;
-(void)setLocalizedReason:(id)arg1;
-(NSString *)localizedReason;
-(NSString *)localizedFallbackTitle;
-(void)setLocalizedFallbackTitle:(id)arg1;
-(void)evaluatePolicy:(long long)arg1 completion:(/*^block*/id)arg2;

@end

