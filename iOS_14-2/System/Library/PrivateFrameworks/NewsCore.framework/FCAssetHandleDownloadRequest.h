/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)cancelHandler;
-(void)setRelativePriority:(long long)arg1 ;
-(id)priorityHandler;
-(long long)relativePriority;
-(void)setCancelHandler:(id)arg1 ;
-(void)setPriorityHandler:(id)arg1 ;
-(void)cancel;
@end

