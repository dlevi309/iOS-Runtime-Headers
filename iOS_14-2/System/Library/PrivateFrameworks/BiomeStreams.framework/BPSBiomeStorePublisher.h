/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomePubSub/BPSPublisher.h>
#import <libobjc.A.dylib/BMBookmarkablePublisher.h>

@class NSString, BMStoreConfig, BMStoreEnumerator, BMStoreBookmark;

@interface BPSBiomeStorePublisher : BPSPublisher <BMBookmarkablePublisher> {

	NSString* _streamId;
	BMStoreConfig* _storeConfig;
	double _startTime;
	BMStoreEnumerator* _enumerator;
	BMStoreBookmark* _bookmark;
	BOOL _nilEnumerator;

}

@property (assign,nonatomic) BOOL nilEnumerator;              //@synthesize nilEnumerator=_nilEnumerator - In the implementation block
-(id)initWithStreamId:(id)arg1 storeConfig:(id)arg2 ;
-(void)subscribe:(id)arg1 ;
-(id)enumerator;
-(void)_configEnumeratorWithBookmark:(id)arg1 ;
-(id)withBookmark:(id)arg1 ;
-(BOOL)nilEnumerator;
-(void)_configEnumeratorWithStartTime:(double)arg1 ;
-(id)bookmarkableUpstreams;
-(void)setNilEnumerator:(BOOL)arg1 ;
-(id)withStartTime:(double)arg1 ;
@end

