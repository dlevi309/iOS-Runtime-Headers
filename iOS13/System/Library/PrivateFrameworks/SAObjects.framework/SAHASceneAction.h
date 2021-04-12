/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAHAAction, NSURL;

@interface SAHASceneAction : SADomainObject

@property (nonatomic,retain) SAHAAction * action; 
@property (nonatomic,copy) NSURL * entityId; 
+(id)sceneAction;
+(id)sceneActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAHAAction *)action;
-(void)setAction:(SAHAAction *)arg1 ;
-(NSURL *)entityId;
-(void)setEntityId:(NSURL *)arg1 ;
-(id)encodedClassName;
@end

