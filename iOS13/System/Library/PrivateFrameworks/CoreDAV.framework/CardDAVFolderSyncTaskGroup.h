/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup {

	BOOL _isInitialSync;

}

@property (assign,nonatomic) BOOL isInitialSync;              //@synthesize isInitialSync=_isInitialSync - In the implementation block
-(BOOL)isInitialSync;
-(void)setIsInitialSync:(BOOL)arg1 ;
-(id)copyGetTaskWithURL:(id)arg1 ;
-(id)dataContentType;
-(id)copyMultiGetTaskWithURLs:(id)arg1 ;
-(Class)bulkChangeTaskClass;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(BOOL)arg5 context:(id)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificDataItemClass:(Class)arg9 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 appSpecificDataItemClass:(Class)arg8 ;
@end

