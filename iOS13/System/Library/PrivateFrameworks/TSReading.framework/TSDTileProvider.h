/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@protocol NSObject, OS_dispatch_queue;
@class TSDTileStorage, TSKAccessController, NSObject, NSString;

@interface TSDTileProvider : NSObject <CALayerDelegate> {

	id<NSObject> mTarget;
	TSDTileStorage* mTileStorage;
	TSKAccessController* mAccessController;
	NSObject*<OS_dispatch_queue> mQueue;
	SCD_Struct_TS85 mVisibleTileRect;

}

@property (assign) SCD_Struct_TS85 visibleTileRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)flush;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)removeStoredImages;
-(id)contentsInRect:(CGRect)arg1 contentsScale:(double)arg2 forTile:(id)arg3 atLocation:(NSRange)arg4 takingReadLock:(BOOL)arg5 ;
-(SCD_Struct_TS85)visibleTileRect;
-(id)p_bucketKey;
-(BOOL)isTargetOpaque;
-(void)drawTargetInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(id)initWithTarget:(id)arg1 queue:(id)arg2 storage:(id)arg3 accessController:(id)arg4 ;
-(void)provideContentsInRect:(CGRect)arg1 contentsScale:(double)arg2 forTile:(id)arg3 atLocation:(NSRange)arg4 inGroup:(id)arg5 limitedBySemaphore:(id)arg6 takingReadLock:(BOOL)arg7 startBlock:(/*^block*/id)arg8 completionBlock:(/*^block*/id)arg9 ;
-(BOOL)canTargetDrawInParallel;
-(void)setVisibleTileRect:(SCD_Struct_TS85)arg1 ;
@end

