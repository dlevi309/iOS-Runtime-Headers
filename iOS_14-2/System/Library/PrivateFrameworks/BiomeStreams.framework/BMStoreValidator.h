/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/


@class NSString, BPSBiomeStorePublisher;

@interface BMStoreValidator : NSObject {

	NSString* _identifier;
	BPSBiomeStorePublisher* _publisher;

}
-(id)init;
-(id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2 ;
-(int)isChronologicallyValidWithPublisher:(id)arg1 shouldContinue:(/*^block*/id)arg2 ;
-(int)isChronologicallyValidFromTimestamp:(double)arg1 ;
-(int)isChronologicallyValidFromBookmark:(id)arg1 shouldContinue:(/*^block*/id)arg2 ;
-(int)isChronologicallyValidFromTimestamp:(double)arg1 shouldContinue:(/*^block*/id)arg2 ;
@end

