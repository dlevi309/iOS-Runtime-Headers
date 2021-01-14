/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelPerson.h>

@class NSString;

@interface MPModelSocialPerson : MPModelPerson

@property (nonatomic,copy) NSString * uncensoredName; 
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,copy) NSString * biography; 
@property (assign,getter=isPrivate,nonatomic) BOOL privatePerson; 
@property (assign,getter=isVerified,nonatomic) BOOL verified; 
@property (assign,nonatomic) long long pendingRequestsCount; 
@property (nonatomic,copy) id artworkCatalogBlock; 
+(id)__privatePerson_KEY;
+(id)__handle_KEY;
+(id)kind;
+(id)__pendingRequestsCount_KEY;
+(id)__uncensoredName_KEY;
+(id)__biography_KEY;
+(id)__verified_KEY;
+(id)__artworkCatalogBlock_KEY;
-(id)artworkCatalog;
@end

