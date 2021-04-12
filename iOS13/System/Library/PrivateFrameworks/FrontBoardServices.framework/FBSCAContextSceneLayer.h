/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)contextID;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCAContext:(id)arg1 ;
-(CAContext *)CAContext;
-(id)_initWithCAContext:(id)arg1 contextID:(unsigned)arg2 fallbackLevel:(double)arg3 ;
-(id)initWithCAContextID:(unsigned)arg1 level:(double)arg2 ;
-(id)_succinctDescription;
-(BOOL)isCAContextLayer;
@end

