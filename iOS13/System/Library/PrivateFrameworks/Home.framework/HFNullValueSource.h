/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFCharacteristicValueSource.h>
#import <libobjc.A.dylib/HFMediaValueSource.h>

@class NSString;

@interface HFNullValueSource : NSObject <HFCharacteristicValueSource, HFMediaValueSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFCharacteristicOperationContextProviding> contextProvider; 
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)readValuesForCharacteristics:(id)arg1 ;
-(id)writeValuesForCharacteristics:(id)arg1 ;
-(void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3 ;
-(void)commitTransactionWithReason:(id)arg1 ;
-(id)cachedValueForCharacteristic:(id)arg1 ;
-(id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2 ;
-(BOOL)hasPendingWritesForRouteID:(id)arg1 ;
-(long long)lastPlaybackStateForProfileForRouteID:(id)arg1 ;
-(id)mediaProfileContainerForRouteID:(id)arg1 ;
-(id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3 ;
-(id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1 ;
@end

