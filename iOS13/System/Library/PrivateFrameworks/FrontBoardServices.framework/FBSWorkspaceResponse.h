/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class FBSSceneMessage, BKSAnimationFenceHandle, NSString;

@interface FBSWorkspaceResponse : NSObject <BSXPCCoding> {

	FBSSceneMessage* _message;
	BKSAnimationFenceHandle* _animationFence;

}

@property (nonatomic,retain) BKSAnimationFenceHandle * animationFence;              //@synthesize animationFence=_animationFence - In the implementation block
@property (nonatomic,copy) FBSSceneMessage * message;                               //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBSSceneMessage *)message;
-(void)setMessage:(FBSSceneMessage *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setAnimationFence:(BKSAnimationFenceHandle *)arg1 ;
-(BKSAnimationFenceHandle *)animationFence;
@end

