/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@class CKKnowledgeStore, NSArray;

@interface VSServerTTSConfig : NSObject {

	CKKnowledgeStore* _knowledgeStore;

}

@property (nonatomic,retain) CKKnowledgeStore * knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) BOOL prefer; 
@property (nonatomic,readonly) BOOL disableOsprey; 
@property (nonatomic,readonly) NSArray * whitelistedAppId; 
+(id)defaultConfig;
-(id)init;
-(CKKnowledgeStore *)knowledgeStore;
-(void)setKnowledgeStore:(CKKnowledgeStore *)arg1 ;
-(BOOL)disableOsprey;
-(double)deviceWaitTimeForAppId:(id)arg1 ;
-(double)timeoutForAppId:(id)arg1 ;
-(id)configForAppId:(id)arg1 key:(id)arg2 ;
-(BOOL)prefer;
-(NSArray *)whitelistedAppId;
@end

