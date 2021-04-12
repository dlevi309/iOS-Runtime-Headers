/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSRemoveDuplicates : BPSPublisher {

	BPSPublisher* _upstream;
	/*^block*/id _isDuplicate;

}

@property (nonatomic,readonly) BPSPublisher * upstream;              //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,copy,readonly) id isDuplicate;                  //@synthesize isDuplicate=_isDuplicate - In the implementation block
-(id)init;
-(void)subscribe:(id)arg1 ;
-(id)isDuplicate;
-(BPSPublisher *)upstream;
-(id)initWithUpstream:(id)arg1 isDuplicate:(/*^block*/id)arg2 ;
@end

