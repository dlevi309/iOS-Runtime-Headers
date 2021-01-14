/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FBSSceneLayer.h>

@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer {

	NSString* _sceneID;

}

@property (nonatomic,copy,readonly) NSString * sceneID;              //@synthesize sceneID=_sceneID - In the implementation block
-(long long)alignment;
-(BOOL)isExternalSceneLayer;
-(id)_initWithCAContext:(id)arg1 fallbackLevel:(double)arg2 sceneID:(id)arg3 ;
-(id)initWithExternalSceneID:(id)arg1 trackingContext:(id)arg2 ;
-(id)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithExternalSceneID:(id)arg1 level:(double)arg2 ;
-(id)_succinctDescription;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sceneID;
@end

