/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGPipelineDissector.h>
#import <libobjc.A.dylib/SGMailMessageProcessing.h>
#import <libobjc.A.dylib/SGTextMessageProcessing.h>

@class _PASLock, NSString;

@interface SGNamedEntityDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {

	_PASLock* _lock;
	BOOL _significanceCheckEnabled;
	int _linguisticDataNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_registerForNotifications;
-(id)init;
-(void)_collectCustomTaggerResultsWithText:(id)arg1 eligibleRegions:(id)arg2 isMessagesSource:(BOOL)arg3 addNamedEntity:(/*^block*/id)arg4 ;
-(void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(id)_entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 dataDetections:(id)arg3 source:(id)arg4 cloudSync:(BOOL)arg5 algorithms:(id)arg6 ;
-(void)_harvestLocationFromEntity:(id)arg1 category:(unsigned long long)arg2 dynamicCategory:(id)arg3 enrichment:(id)arg4 algorithm:(unsigned short)arg5 ;
-(id)initWithSignificanceCheckEnabled:(BOOL)arg1 ;
-(id)_collectDataDetectorsWithText:(id)arg1 algorithms:(id)arg2 dataDetections:(id)arg3 isMessagesSource:(BOOL)arg4 lookupQids:(id)arg5 addNamedEntity:(/*^block*/id)arg6 ;
-(id)entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 source:(id)arg3 cloudSync:(BOOL)arg4 algorithms:(id)arg5 ;
-(void)_collectNLPTaggerResultsWithText:(id)arg1 ddMatches:(id)arg2 eligibleRegions:(id)arg3 isMessagesSource:(BOOL)arg4 addNamedEntity:(/*^block*/id)arg5 ;
-(void)_dissectMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(void)dealloc;
@end

