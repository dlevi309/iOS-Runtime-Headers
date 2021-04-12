/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <libobjc.A.dylib/BPSSubscription.h>

@protocol BPSSubscription <BPSCancellable,NSObject>
@required
-(void)requestDemand:(long long)arg1;

@end

#import <libobjc.A.dylib/BPSUpstreamSubscriptions.h>

@class NSArray, NSString;

@interface BPSSubscription : NSObject <BPSSubscription, BPSUpstreamSubscriptions>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * upstreamSubscriptions; 
-(id)newBookmark;
-(void)requestDemand:(long long)arg1 ;
-(NSArray *)upstreamSubscriptions;
-(void)cancel;
@end

