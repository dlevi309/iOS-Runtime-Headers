/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPresentationCanvas.h>

@class NSString, NSMutableArray, NSMutableDictionary, OKPresentationCouchStep;

@interface OKPresentationCouch : OKPresentationCanvas {

	NSString* _restartScript;
	NSMutableArray* _steps;
	NSMutableDictionary* _internalSettings;
	OKPresentationCouchStep* _loopStep;

}

@property (nonatomic,copy,readonly) NSMutableArray * steps;                   //@synthesize steps=_steps - In the implementation block
@property (nonatomic,copy) NSString * restartScript;                          //@synthesize restartScript=_restartScript - In the implementation block
@property (nonatomic,retain) OKPresentationCouchStep * loopStep;              //@synthesize loopStep=_loopStep - In the implementation block
+(id)couchWithName:(id)arg1 settings:(id)arg2 steps:(id)arg3 restartScript:(id)arg4 ;
-(NSMutableArray *)steps;
-(id)init;
-(void)addStep:(id)arg1 ;
-(id)dictionary;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)resolveIfNeeded;
-(id)canvasWithName:(id)arg1 ;
-(id)closestStepForPageName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3 ;
-(id)lastStepForPageName:(id)arg1 ;
-(id)nextStepAfterStep:(id)arg1 canLoop:(BOOL)arg2 ;
-(NSString *)restartScript;
-(void)setRestartScript:(NSString *)arg1 ;
-(OKPresentationCouchStep *)loopStep;
-(void)setLoopStep:(OKPresentationCouchStep *)arg1 ;
@end

