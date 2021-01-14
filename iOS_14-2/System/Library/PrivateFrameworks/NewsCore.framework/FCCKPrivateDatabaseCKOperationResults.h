/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(id)init;
-(NSError *)combinedError;
-(FCThreadSafeMutableArray *)threadSafeItems;
-(FCThreadSafeMutableArray *)threadSafeErrorsAndItemIDs;
-(NSArray *)combinedResultItems;
-(void)operationWillStart;
-(void)operationDidFinishWithItemIDs:(id)arg1 resultItems:(id)arg2 error:(id)arg3 ;
-(void)notifyWhenFinishWithQoS:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setThreadSafeItems:(FCThreadSafeMutableArray *)arg1 ;
-(void)setThreadSafeErrorsAndItemIDs:(FCThreadSafeMutableArray *)arg1 ;
@end

