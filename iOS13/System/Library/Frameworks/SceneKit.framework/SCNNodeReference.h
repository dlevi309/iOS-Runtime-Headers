/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SCNReferenceNode.h>

@class NSString;

@interface SCNNodeReference : SCNReferenceNode {

	NSString* referenceSceneName;
	NSString* referenceNodeName;

}

@property (nonatomic,copy) NSString * referenceSceneName; 
@property (nonatomic,copy) NSString * referenceNodeName; 
-(void)dealloc;
-(void)_reloadWithScene:(id)arg1 ;
-(NSString *)referenceSceneName;
-(void)setReferenceSceneName:(NSString *)arg1 ;
-(NSString *)referenceNodeName;
-(void)setReferenceNodeName:(NSString *)arg1 ;
@end

