/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol OS_dispatch_group;
@class NSObject, FCThreadSafeMutableArray, NSArray, NSError;

@interface FCCKPrivateDatabaseCKOperationResults : NSObject {

	NSObject*<OS_dispatch_group> _group;
	FCThreadSafeMutableArray* _threadSafeItems;
	FCThreadSafeMutableArray* _threadSafeErrorsAndItemIDs;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;                                 //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableArray * threadSafeItems;                         //@synthesize threadSafeItems=_threadSafeItems - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableArray * threadSafeErrorsAndItemIDs;              //@synthesize threadSafeErrorsAndItemIDs=_threadSafeErrorsAndItemIDs - In the implementation block
@property (nonatomic,readonly) NSArray * combinedResultItems; 
@property (nonatomic,readonly) NSError * combinedError; 
-(id)init;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(FCThreadSafeMutableArray *)threadSafeItems;
-(FCThreadSafeMutableArray *)threadSafeErrorsAndItemIDs;
-(NSArray *)combinedResultItems;
-(NSError *)combinedError;
-(void)operationWillStart;
-(void)operationDidFinishWithItemIDs:(id)arg1 resultItems:(id)arg2 error:(id)arg3 ;
-(void)notifyWhenFinishWithQoS:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setThreadSafeItems:(FCThreadSafeMutableArray *)arg1 ;
-(void)setThreadSafeErrorsAndItemIDs:(FCThreadSafeMutableArray *)arg1 ;
@end

