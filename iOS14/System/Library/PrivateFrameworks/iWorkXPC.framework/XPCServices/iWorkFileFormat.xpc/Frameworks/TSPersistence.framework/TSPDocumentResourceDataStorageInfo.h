/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

@class TSPDocumentResourceInfo;


@protocol TSPDocumentResourceDataStorageInfo <NSObject>
@property (nonatomic,readonly) id<TSUResourceRequest> resourceRequest; 
@property (nonatomic,readonly) TSPDocumentResourceInfo * documentResourceInfo; 
@required
-(id<TSUResourceRequest>)resourceRequest;
-(TSPDocumentResourceInfo *)documentResourceInfo;

@end

