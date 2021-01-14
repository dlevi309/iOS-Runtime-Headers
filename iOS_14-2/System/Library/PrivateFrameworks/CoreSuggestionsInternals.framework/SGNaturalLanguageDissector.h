/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGPipelineDissector.h>
#import <libobjc.A.dylib/SGMailMessageProcessing.h>
#import <libobjc.A.dylib/SGTextMessageProcessing.h>

@class NSMutableDictionary, NSString;

@interface SGNaturalLanguageDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {

	NSMutableDictionary* _conversations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_personForCSPerson:(id)arg1 ;
+(BOOL)allowNaturalLanguageDissector;
+(id)ipsosMessageWithMailMessage:(id)arg1 store:(id)arg2 ;
+(id)ipsosMessageWithTextMessage:(id)arg1 store:(id)arg2 ;
-(id)initWithoutSharedInstance;
-(id)init;
-(void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(void)clearConversations;
-(void)addEnrichmentForEvents:(id)arg1 forMessage:(id)arg2 toEntity:(id)arg3 ;
-(BOOL)_shouldProcessMessage:(id)arg1 entity:(id)arg2 ;
-(id)conversationWithIdentifier:(id)arg1 ;
-(void)_tagNaturalLanguageEnrichmentsForEntity:(id)arg1 ;
-(void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
@end

