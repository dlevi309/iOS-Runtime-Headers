/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@interface SLService : NSObject
+(id)allServices;
+(id)serviceForServiceType:(id)arg1 ;
-(id)accountType;
-(id)composeViewController;
-(BOOL)hasAccounts;
-(id)serviceType;
-(id)activityTitle;
-(id)activityImage;
-(void)addExtraParameters:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)isFirstClassService;
-(long long)maximumURLCount;
-(long long)maximumImageCount;
-(long long)maximumImageDataSize;
-(long long)maximumVideoCount;
-(long long)maximumVideoDataSize;
-(long long)maximumVideoTimeLimit;
-(BOOL)supportsImageURL:(id)arg1 ;
-(BOOL)supportsVideoURL:(id)arg1 ;
@end

