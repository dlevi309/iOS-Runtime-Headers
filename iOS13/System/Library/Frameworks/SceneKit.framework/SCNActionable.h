/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

@class NSArray;


@protocol SCNActionable <NSObject>
@property (nonatomic,readonly) BOOL hasActions; 
@property (nonatomic,readonly) NSArray * actionKeys; 
@required
-(void)removeAllActions;
-(id)actionForKey:(id)arg1;
-(BOOL)hasActions;
-(void)runAction:(id)arg1;
-(NSArray *)actionKeys;
-(void)runAction:(id)arg1 forKey:(id)arg2;
-(void)removeActionForKey:(id)arg1;
-(void)runAction:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)runAction:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

