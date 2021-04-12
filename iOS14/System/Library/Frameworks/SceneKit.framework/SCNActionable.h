/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

@class NSArray;


@protocol SCNActionable <NSObject>
@property (nonatomic,readonly) BOOL hasActions; 
@property (nonatomic,readonly) NSArray * actionKeys; 
@required
-(BOOL)hasActions;
-(id)actionForKey:(id)arg1;
-(void)removeAllActions;
-(void)runAction:(id)arg1;
-(void)removeActionForKey:(id)arg1;
-(void)runAction:(id)arg1 forKey:(id)arg2;
-(NSArray *)actionKeys;
-(void)runAction:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)runAction:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

