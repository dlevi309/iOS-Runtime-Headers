/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSKSearchTargetProvider.h>

@class NSArray, NSString;

@interface TSKAggregateSearchTargetProvider : NSObject <TSKSearchTargetProvider> {

	NSArray* _searchTargetProviders;

}

@property (nonatomic,retain) NSArray * searchTargetProviders;              //@synthesize searchTargetProviders=_searchTargetProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1 ;
-(void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(/*^block*/id)arg2 ;
-(unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4 ;
-(void)setSearchTargetProviders:(NSArray *)arg1 ;
-(unsigned long long)p_firstTargetIndexForProvider:(id)arg1 ;
-(void)p_enumerateTargetProvidersFromTargetIndex:(unsigned long long)arg1 direction:(unsigned long long)arg2 action:(/*^block*/id)arg3 ;
-(id)initWithSearchTargetProviders:(id)arg1 ;
-(NSArray *)searchTargetProviders;
@end

