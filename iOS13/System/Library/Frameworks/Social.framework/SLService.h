/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@interface SLService : NSObject
+(id)serviceForServiceType:(id)arg1 ;
+(id)allServices;
-(id)serviceType;
-(id)accountType;
-(id)activityTitle;
-(id)activityImage;
-(void)addExtraParameters:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)hasAccounts;
-(BOOL)isFirstClassService;
-(long long)maximumURLCount;
-(long long)maximumImageCount;
-(long long)maximumImageDataSize;
-(long long)maximumVideoCount;
-(long long)maximumVideoDataSize;
-(long long)maximumVideoTimeLimit;
-(BOOL)supportsImageURL:(id)arg1 ;
-(BOOL)supportsVideoURL:(id)arg1 ;
-(id)composeViewController;
@end

