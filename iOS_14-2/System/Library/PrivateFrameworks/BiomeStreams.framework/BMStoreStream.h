/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <libobjc.A.dylib/BMSourceStream.h>
#import <libobjc.A.dylib/BMStream.h>

@class NSString, BMStoreConfig, BMStoreSource, BMStoreValidator, BMStreamsAccessClient;

@interface BMStoreStream : NSObject <BMSourceStream, BMStream> {

	NSString* _streamIdentifier;
	BMStoreConfig* _storeConfig;
	BMStoreSource* _source;
	BMStoreValidator* _validator;
	BOOL _isPublic;
	BMStreamsAccessClient* _accessClient;

}

@property (nonatomic,readonly) NSString * identifier; 
-(id)publisher;
-(id)init;
-(void)pruneWithPredicateBlock:(/*^block*/id)arg1 ;
-(id)initWithPublicStream:(long long)arg1 storeConfig:(id)arg2 ;
-(id)initWithStreamIdentifier:(id)arg1 storeConfig:(id)arg2 isPublic:(BOOL)arg3 ;
-(id)validator;
-(id)publisherFromStartTime:(double)arg1 ;
-(id)_publisher;
-(NSString *)identifier;
-(id)initWithStreamIdentifier:(id)arg1 storeConfig:(id)arg2 ;
-(id)source;
@end

