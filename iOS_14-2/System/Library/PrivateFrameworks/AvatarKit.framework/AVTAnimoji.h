/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <AvatarKit/AVTAvatar.h>

@class NSURL, SCNNode, NSDictionary, NSString;

@interface AVTAnimoji : AVTAvatar {

	NSURL* _url;
	SCNNode* _lightingNode;
	SCNNode* _headNode;
	SCNNode* _avatarNode;
	SCNNode* _cameraNode;
	NSDictionary* _specializationSettings;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) SCNNode * lightingNode; 
@property (nonatomic,readonly) SCNNode * cameraNode; 
+(id)animojiNamed:(id)arg1 ;
+(id)animojiNames;
+(id)thumbnailForAnimojiNamed:(id)arg1 options:(id)arg2 ;
+(unsigned char)classIdentifier;
+(void)preloadAnimojiNamed:(id)arg1 ;
+(id)_sceneURLForPuppetDirectoryURL:(id)arg1 ;
+(id)_scenePathForPuppetNamed:(id)arg1 ;
+(id)puppetNamed:(id)arg1 options:(id)arg2 ;
+(void)preloadPuppet:(id)arg1 ;
+(id)puppetNames;
+(id)thumbnailForPuppetNamed:(id)arg1 options:(id)arg2 ;
+(void)preloadPuppetNamed:(id)arg1 ;
+(id)animojiWithContentsOfURL:(id)arg1 ;
-(void)loadIfNeeded;
-(id)url;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)update;
-(id)description;
-(void)setUrl:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)_load;
-(id)headNode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCNNode *)cameraNode;
-(unsigned long long)usageIntent;
-(id)specializationSettings;
-(id)avatarNode;
-(void)_encode:(id)arg1 ;
-(id)stickerPhysicsStateIdentifier;
-(id)_sceneURL;
-(id)initWithDictionaryRepresentation:(id)arg1 usageIntent:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)copyWithUsageIntent:(unsigned long long)arg1 ;
-(SCNNode *)lightingNode;
-(id)puppetState;
-(void)setPuppetState:(id)arg1 ;
-(void)configureForBestAnimationQuality;
@end

