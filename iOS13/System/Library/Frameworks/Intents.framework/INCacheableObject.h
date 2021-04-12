/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

