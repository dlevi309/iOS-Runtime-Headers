/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKAchievementInternal, UIImage, NSString;

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding> {

	GKAchievementInternal* _internal;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (retain) GKAchievementInternal * internal;                               //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,retain,readonly) NSString * groupIdentifier; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * achievedDescription; 
@property (nonatomic,copy,readonly) NSString * unachievedDescription; 
@property (nonatomic,readonly) long long maximumPoints; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (getter=isReplayable,nonatomic,readonly) BOOL replayable; 
+(id)incompleteAchievementImage;
+(id)placeholderCompletedAchievementImage;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)_achievementDescriptionFromGame:(id)arg1 propertyListDictionary:(id)arg2 ;
+(id)_loadLocalAchievementDescriptionsForGame:(id)arg1 ;
+(void)loadAchievementDescriptionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)imageURL;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showBanner;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(GKAchievementInternal *)internal;
-(void)setInternal:(GKAchievementInternal *)arg1 ;
-(id)game;
-(id)imageNameForIcon;
@end

