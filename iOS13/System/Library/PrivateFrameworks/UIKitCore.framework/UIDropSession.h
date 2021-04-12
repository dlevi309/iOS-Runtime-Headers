/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIDropSession <UIDragDropSession,NSProgressReporting>
@property (nonatomic,readonly) id<UIDragSession> localDragSession; 
@property (assign,nonatomic) unsigned long long progressIndicatorStyle; 
@required
-(id<UIDragSession>)localDragSession;
-(void)setProgressIndicatorStyle:(unsigned long long)arg1;
-(id)loadObjectsOfClass:(Class)arg1 completion:(/*^block*/id)arg2;
-(unsigned long long)progressIndicatorStyle;

@end

