/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BMSource.h>

@protocol BMCoreDuetMediaUsageStore;
@interface BMCoreDuetMediaUsageSource : BMSource {

	id<BMCoreDuetMediaUsageStore> _storage;

}

@property (nonatomic,retain) id<BMCoreDuetMediaUsageStore> storage;              //@synthesize storage=_storage - In the implementation block
-(void)setStorage:(id<BMCoreDuetMediaUsageStore>)arg1 ;
-(id<BMCoreDuetMediaUsageStore>)storage;
-(void)sendEvent:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

