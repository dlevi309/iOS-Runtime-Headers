/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSArray;

@interface FCFetchedValueDescriptor : NSObject

@property (nonatomic,readonly) NSArray * inputManagers; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(NSArray *)inputManagers;
-(id)fastCachedValue;
-(id)valuePromiseWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 ;
@end

