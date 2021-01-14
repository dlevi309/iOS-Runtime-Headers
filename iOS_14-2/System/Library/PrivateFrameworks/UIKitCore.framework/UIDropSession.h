/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIDropSession <UIDragDropSession,NSProgressReporting>
@property (nonatomic,readonly) id<UIDragSession> localDragSession; 
@property (assign,nonatomic) unsigned long long progressIndicatorStyle; 
@required
-(id)loadObjectsOfClass:(Class)arg1 completion:(/*^block*/id)arg2;
-(void)setProgressIndicatorStyle:(unsigned long long)arg1;
-(unsigned long long)progressIndicatorStyle;
-(id<UIDragSession>)localDragSession;

@end

