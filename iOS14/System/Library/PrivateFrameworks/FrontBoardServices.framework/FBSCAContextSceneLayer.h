/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FBSSceneLayer.h>

@class CAContext;

@interface FBSCAContextSceneLayer : FBSSceneLayer {

	unsigned _contextID;

}

@property (nonatomic,readonly) CAContext * CAContext; 
@property (nonatomic,readonly) unsigned contextID;                 //@synthesize contextID=_contextID - In the implementation block
+(id)layerWithCAContext:(id)arg1 ;
-(CAContext *)CAContext;
-(id)initWithCAContext:(id)arg1 ;
-(id)description;
-(unsigned)contextID;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCAContextID:(unsigned)arg1 level:(double)arg2 ;
-(BOOL)isCAContextLayer;
-(unsigned long long)hash;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_initWithCAContext:(id)arg1 contextID:(unsigned)arg2 fallbackLevel:(double)arg3 ;
-(id)_succinctDescription;
-(BOOL)isEqual:(id)arg1 ;
@end

