/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSSet;

@interface SBSceneBackgroundedStatusAssertion : NSObject {

	NSSet* _scenes;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,copy,readonly) NSSet * scenes;              //@synthesize scenes=_scenes - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(NSSet *)scenes;
-(id)initWithScenes:(id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
@end

