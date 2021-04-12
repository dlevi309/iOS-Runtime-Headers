/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

