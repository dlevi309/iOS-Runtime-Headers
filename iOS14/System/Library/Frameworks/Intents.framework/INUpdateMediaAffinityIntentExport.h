/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, INMediaSearch, INPrivateUpdateMediaAffinityIntentData;


@protocol INUpdateMediaAffinityIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,copy) INMediaSearch * mediaSearch; 
@property (assign,nonatomic) long long affinityType; 
@property (nonatomic,copy) INPrivateUpdateMediaAffinityIntentData * privateUpdateMediaAffinityIntentData; 
@required
-(id)init;
-(NSArray *)mediaItems;
-(INMediaSearch *)mediaSearch;
-(void)setMediaItems:(id)arg1;
-(void)setMediaSearch:(id)arg1;
-(long long)affinityType;
-(void)setAffinityType:(long long)arg1;
-(INPrivateUpdateMediaAffinityIntentData *)privateUpdateMediaAffinityIntentData;
-(void)setPrivateUpdateMediaAffinityIntentData:(id)arg1;

@end

