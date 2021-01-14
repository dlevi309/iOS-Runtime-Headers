/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSSet;

@interface SBSceneBackgroundedStatusAssertion : NSObject {

	NSSet* _scenes;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,copy,readonly) NSSet * scenes;              //@synthesize scenes=_scenes - In the implementation block
-(NSSet *)scenes;
-(id)initWithScenes:(id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)dealloc;
@end

