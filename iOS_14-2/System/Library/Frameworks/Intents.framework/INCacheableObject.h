/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString;


@protocol INCacheableObject <NSObject>
@property (nonatomic,copy,readonly) NSString * cacheIdentifier; 
@required
+(void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)generateCachePayloadWithCompletion:(/*^block*/id)arg1;
-(NSString *)cacheIdentifier;

@end

