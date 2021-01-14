/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BPSPublisher.h>
#import <libobjc.A.dylib/BPSPublisher.h>

@class BPSPublisher, NSString;

@interface BPSScan : BPSPublisher <BPSPublisher> {

	BPSPublisher* _upstream;
	id _initialResult;
	/*^block*/id _nextPartialResult;

}

@property (nonatomic,readonly) BPSPublisher * upstream;                //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,readonly) id initialResult;                       //@synthesize initialResult=_initialResult - In the implementation block
@property (nonatomic,copy,readonly) id nextPartialResult;              //@synthesize nextPartialResult=_nextPartialResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bookmarkableUpstreams;
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStorePassThroughValueInBookmark;
-(BOOL)canStoreInternalStateInBookmark;
-(id)nextPartialResult;
-(void)subscribe:(id)arg1 ;
-(BPSPublisher *)upstream;
-(id)initialResult;
-(id)initWithUpstream:(id)arg1 initialResult:(id)arg2 nextPartialResult:(/*^block*/id)arg3 ;
@end

