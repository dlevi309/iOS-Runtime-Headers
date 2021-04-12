/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BPSPublisher.h>

@class NSArray;

@interface BPSZipMany : BPSPublisher {

	NSArray* _publishers;

}

@property (nonatomic,readonly) NSArray * publishers;              //@synthesize publishers=_publishers - In the implementation block
-(id)init;
-(void)subscribe:(id)arg1 ;
-(NSArray *)publishers;
-(id)initWithPublishers:(id)arg1 ;
@end

