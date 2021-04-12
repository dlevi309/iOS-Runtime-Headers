/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(SAHAAction *)action;
-(void)setAction:(SAHAAction *)arg1 ;
-(NSURL *)entityId;
-(void)setEntityId:(NSURL *)arg1 ;
@end

