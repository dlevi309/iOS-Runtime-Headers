/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@class CKKnowledgeStore, NSArray;

@interface VSSiriServerConfiguration : NSObject {

	CKKnowledgeStore* _knowledgeStore;

}

@property (nonatomic,retain) CKKnowledgeStore * knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) BOOL disableOsprey; 
@property (nonatomic,readonly) BOOL shouldDelayVoiceUpdate; 
@property (nonatomic,readonly) NSArray * whitelistedAppId; 
+(id)defaultConfig;
-(id)init;
-(id)experimentIdentifier;
-(BOOL)disableOsprey;
-(void)setKnowledgeStore:(CKKnowledgeStore *)arg1 ;
-(CKKnowledgeStore *)knowledgeStore;
-(double)deviceWaitTimeForAppId:(id)arg1 ;
-(double)timeoutForAppId:(id)arg1 ;
-(BOOL)shouldDelayVoiceUpdate;
-(id)dictForKey:(id)arg1 ;
-(id)configForAppId:(id)arg1 key:(id)arg2 ;
-(NSArray *)whitelistedAppId;
@end

