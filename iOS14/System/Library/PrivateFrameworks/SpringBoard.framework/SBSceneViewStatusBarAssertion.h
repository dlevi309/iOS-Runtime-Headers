/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSHashTable, SBAppStatusBarSettings, NSString;

@interface SBSceneViewStatusBarAssertion : NSObject <BSInvalidatable> {

	NSHashTable* _observers;
	BOOL _shouldDrawStatusBarInsideSceneView;
	long long _nubViewHidden;
	SBAppStatusBarSettings* _settings;
	unsigned long long _level;

}

@property (assign,getter=isStatusBarHidden,nonatomic) BOOL statusBarHidden; 
@property (assign,nonatomic) long long nubViewHidden;                                    //@synthesize nubViewHidden=_nubViewHidden - In the implementation block
@property (nonatomic,copy) SBAppStatusBarSettings * settings;                            //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawStatusBarInsideSceneView;                    //@synthesize shouldDrawStatusBarInsideSceneView=_shouldDrawStatusBarInsideSceneView - In the implementation block
@property (nonatomic,readonly) unsigned long long level;                                 //@synthesize level=_level - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)setNubViewHidden:(long long)arg1 ;
-(void)_notifyObserversDidUpdate;
-(void)_notifyObserversDidInvalidate;
-(void)setShouldDrawStatusBarInsideSceneView:(BOOL)arg1 ;
-(void)setSettings:(SBAppStatusBarSettings *)arg1 ;
-(unsigned long long)level;
-(BOOL)shouldDrawStatusBarInsideSceneView;
-(id)initWithStatusBarHidden:(BOOL)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3 ;
-(SBAppStatusBarSettings *)settings;
-(void)removeObserver:(id)arg1 ;
-(long long)nubViewHidden;
-(BOOL)isStatusBarHidden;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(void)invalidate;
-(id)initWithStatusBarSettings:(id)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3 ;
-(void)dealloc;
@end

