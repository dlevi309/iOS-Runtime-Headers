/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BPSPublisher.h>

@class NSArray;

@interface BPSSequence : BPSPublisher {

	NSArray* _sequence;

}

@property (nonatomic,retain) NSArray * sequence;              //@synthesize sequence=_sequence - In the implementation block
-(id)bookmarkableUpstreams;
-(id)init;
-(void)subscribe:(id)arg1 ;
-(NSArray *)sequence;
-(void)setSequence:(NSArray *)arg1 ;
-(id)initWithSequence:(id)arg1 ;
@end

