/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@interface CPAggregateDictionary : NSObject

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
+(id)sharedAggregateDictionary;
-(BOOL)isEnabled;
-(int)commit;
-(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
-(void)clearScalarKey:(id)arg1 ;
-(void)setValue:(double)arg1 forDistributionKey:(id)arg2 ;
-(void)clearDistributionKey:(id)arg1 ;
-(void)significantTimeChanged;
-(void)incrementKey:(id)arg1 ;
-(void)decrementKey:(id)arg1 ;
-(void)addValue:(long long)arg1 forKey:(id)arg2 ;
-(void)subtractValue:(long long)arg1 forKey:(id)arg2 ;
-(void)pushValue:(double)arg1 forKey:(id)arg2 ;
@end

