/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FBSSceneLayer.h>

@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer {

	NSString* _sceneID;

}

@property (nonatomic,copy,readonly) NSString * sceneID;              //@synthesize sceneID=_sceneID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)alignment;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithExternalSceneID:(id)arg1 trackingContext:(id)arg2 ;
-(NSString *)sceneID;
-(id)_succinctDescription;
-(id)_initWithCAContext:(id)arg1 fallbackLevel:(double)arg2 sceneID:(id)arg3 ;
-(id)initWithExternalSceneID:(id)arg1 level:(double)arg2 ;
-(BOOL)isExternalSceneLayer;
@end

