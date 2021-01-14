/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@interface CPAggregateDictionary : NSObject

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
+(id)sharedAggregateDictionary;
-(int)commit;
-(void)clearDistributionKey:(id)arg1 ;
-(void)significantTimeChanged;
-(void)clearScalarKey:(id)arg1 ;
-(void)setValue:(double)arg1 forDistributionKey:(id)arg2 ;
-(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
-(void)pushValue:(double)arg1 forKey:(id)arg2 ;
-(BOOL)isEnabled;
-(void)incrementKey:(id)arg1 ;
-(void)addValue:(long long)arg1 forKey:(id)arg2 ;
-(void)subtractValue:(long long)arg1 forKey:(id)arg2 ;
-(void)decrementKey:(id)arg1 ;
@end

