/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

@class NSString;


@protocol TSADocumentRootDelegate <TSKAccessControllerDelegate>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * defaultDraftName; 
@property (nonatomic,readonly) NSString * documentCachePath; 
@optional
-(NSString *)documentCachePath;
-(NSString *)defaultDraftName;
-(void)invalidateRestorableState;
-(void)continueActivityUsingBlock:(/*^block*/id)arg1;
-(void)didAddObserverForICloudTeardown:(id)arg1;
-(void)willRemoveICloudTeardownObserver:(id)arg1;

@required
-(NSString *)name;

@end

