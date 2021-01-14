/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelStoreAsset : MPModelObject

@property (assign,nonatomic) long long endpointType; 
@property (nonatomic,copy) NSString * redownloadParameters; 
@property (assign,getter=isRedownloadable,nonatomic) BOOL redownloadable; 
@property (assign,nonatomic) unsigned long long accountIdentifier; 
@property (assign,nonatomic) BOOL shouldReportPlayEvents; 
@property (assign,getter=isSubscriptionRequired,nonatomic) BOOL subscriptionRequired; 
@property (nonatomic,readonly) BOOL needsUserUpload; 
+(id)__redownloadable_KEY;
+(id)__subscriptionRequired_KEY;
+(id)__accountIdentifier_KEY;
+(id)__needsUserUpload_KEY;
+(id)__shouldReportPlayEvents_KEY;
+(id)__endpointType_KEY;
+(id)__redownloadParameters_KEY;
+(id)allSupportedProperties;
@end

