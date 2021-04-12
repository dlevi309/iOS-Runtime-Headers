/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSArray;

@interface FCFetchedValueDescriptor : NSObject

@property (nonatomic,readonly) NSArray * inputManagers; 
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(id)fastCachedValue;
-(id)valuePromiseWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 ;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(NSArray *)inputManagers;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

