/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking;
@class NSMutableArray, NSArray;

@interface HMDMessageFilterChain : HMFObject {

	id<HMFLocking> _lock;
	NSMutableArray* _filters;

}

@property (nonatomic,copy,readonly) NSArray * filters; 
-(id)init;
-(NSArray *)filters;
-(void)addMessageFilter:(id)arg1 ;
-(BOOL)acceptMessage:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldCloudSyncData;
-(void)removeMessageFilter:(id)arg1 ;
-(void)resetConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

