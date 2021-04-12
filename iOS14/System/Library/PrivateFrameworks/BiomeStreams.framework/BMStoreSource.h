/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BMSource.h>

@class BMStreamDatastoreWriter;

@interface BMStoreSource : BMSource {

	BMStreamDatastoreWriter* _writer;

}
-(id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2 ;
-(void)sendEvent:(id)arg1 timestamp:(double)arg2 ;
-(void)sendEvent:(id)arg1 ;
@end

