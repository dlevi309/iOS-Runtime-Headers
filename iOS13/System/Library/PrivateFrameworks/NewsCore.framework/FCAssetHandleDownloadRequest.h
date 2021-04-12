/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationCanceling.h>
#import <libobjc.A.dylib/FCOperationPrioritizing.h>

@class NSString;

@interface FCAssetHandleDownloadRequest : NSObject <FCOperationCanceling, FCOperationPrioritizing> {

	long long _relativePriority;
	/*^block*/id _cancelHandler;
	/*^block*/id _priorityHandler;

}

@property (nonatomic,copy) id cancelHandler;                          //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,copy) id priorityHandler;                        //@synthesize priorityHandler=_priorityHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long relativePriority;              //@synthesize relativePriority=_relativePriority - In the implementation block
-(void)cancel;
-(id)cancelHandler;
-(void)setCancelHandler:(id)arg1 ;
-(long long)relativePriority;
-(void)setRelativePriority:(long long)arg1 ;
-(void)setPriorityHandler:(id)arg1 ;
-(id)priorityHandler;
@end

