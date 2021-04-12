/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXInfoProvider, PXInfoUpdaterObserver;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSString, NSProgress;

@interface PXInfoUpdater : NSObject {

	SCD_Struct_PX38 _infoProviderRespondsTo;
	SCD_Struct_PX38 _observerRespondsTo;
	BOOL _shouldUpdateInfo;
	BOOL _isUpdatingInfo;
	id _info;
	id<PXInfoProvider> _infoProvider;
	NSString* _infoKind;
	id<PXInfoUpdaterObserver> _observer;
	long long _currentUpdateGeneration;
	long long _currentUpdatePriority;
	NSProgress* _currentUpdateProgress;

}

@property (nonatomic,retain) id info;                                                //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateInfo;                                  //@synthesize shouldUpdateInfo=_shouldUpdateInfo - In the implementation block
@property (assign,nonatomic) BOOL isUpdatingInfo;                                    //@synthesize isUpdatingInfo=_isUpdatingInfo - In the implementation block
@property (assign,nonatomic) long long currentUpdateGeneration;                      //@synthesize currentUpdateGeneration=_currentUpdateGeneration - In the implementation block
@property (assign,nonatomic) long long currentUpdatePriority;                        //@synthesize currentUpdatePriority=_currentUpdatePriority - In the implementation block
@property (nonatomic,retain) NSProgress * currentUpdateProgress;                     //@synthesize currentUpdateProgress=_currentUpdateProgress - In the implementation block
@property (nonatomic,__weak,readonly) id<PXInfoProvider> infoProvider;               //@synthesize infoProvider=_infoProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * infoKind;                             //@synthesize infoKind=_infoKind - In the implementation block
@property (assign,nonatomic,__weak) id<PXInfoUpdaterObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(NSString *)infoKind;
-(id)info;
-(void)setObserver:(id<PXInfoUpdaterObserver>)arg1 ;
-(id)init;
-(id<PXInfoUpdaterObserver>)observer;
-(void)setCurrentUpdateGeneration:(long long)arg1 ;
-(void)_updateInfoIfNeeded;
-(long long)currentUpdatePriority;
-(id<PXInfoProvider>)infoProvider;
-(BOOL)shouldUpdateInfo;
-(void)_handleCurrentUpdateWithInfo:(id)arg1 generation:(long long)arg2 ;
-(NSProgress *)currentUpdateProgress;
-(void)setIsUpdatingInfo:(BOOL)arg1 ;
-(void)invalidateInfo;
-(void)_updateInfo;
-(void)setInfo:(id)arg1 ;
-(void)setCurrentUpdatePriority:(long long)arg1 ;
-(BOOL)isUpdatingInfo;
-(void)setCurrentUpdateProgress:(NSProgress *)arg1 ;
-(id)initWithInfoProvider:(id)arg1 infoKind:(id)arg2 ;
-(void)setShouldUpdateInfo:(BOOL)arg1 ;
-(void)performBlockWhenDoneUpdating:(/*^block*/id)arg1 ;
-(long long)currentUpdateGeneration;
@end

