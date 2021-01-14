/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPReadCoordinator <NSObject>
@property (nonatomic,readonly) BOOL isReadingFromDocument; 
@property (nonatomic,readonly) long long archiveValidationMode; 
@optional
-(long long)archiveValidationMode;
-(void)validateArchiveWithCompletion:(/*^block*/id)arg1;

@required
-(void)readRootObjectWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)endReading;
-(void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)isReadingFromDocument;

@end

