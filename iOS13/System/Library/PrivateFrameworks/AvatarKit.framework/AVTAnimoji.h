/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <AvatarKit/AVTAvatar.h>

@class NSURL, SCNNode, NSDictionary, NSString;

@interface AVTAnimoji : AVTAvatar {

	BOOL _loaded;
	NSURL* _url;
	SCNNode* _lightingNode;
	SCNNode* _cameraNode;
	NSDictionary* _specializationSettings;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) SCNNode * lightingNode; 
@property (nonatomic,readonly) SCNNode * cameraNode; 
+(unsigned char)classIdentifier;
+(id)animojiNamed:(id)arg1 ;
+(id)animojiNames;
+(id)thumbnailForAnimojiNamed:(id)arg1 options:(id)arg2 ;
+(void)preloadAnimojiNamed:(id)arg1 ;
+(id)_scenePathForPuppetNamed:(id)arg1 ;
+(id)puppetNamed:(id)arg1 options:(id)arg2 ;
+(void)preloadPuppet:(id)arg1 ;
+(id)puppetNames;
+(id)thumbnailForPuppetNamed:(id)arg1 options:(id)arg2 ;
+(void)preloadPuppetNamed:(id)arg1 ;
+(id)animoji;
+(id)animojiWithContentsOfURL:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)url;
-(void)update;
-(void)setUrl:(id)arg1 ;
-(void)_load;
-(void)loadIfNeeded;
-(id)specializationSettings;
-(id)avatarNode;
-(void)_encode:(id)arg1 ;
-(id)stickerPhysicsStateIdentifier;
-(void)setAvatarNode:(id)arg1 ;
-(id)arTechniqueName;
-(SCNNode *)lightingNode;
-(SCNNode *)cameraNode;
-(id)puppetState;
-(void)setPuppetState:(id)arg1 ;
-(BOOL)_decode:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasCustomARTechnique;
@end

