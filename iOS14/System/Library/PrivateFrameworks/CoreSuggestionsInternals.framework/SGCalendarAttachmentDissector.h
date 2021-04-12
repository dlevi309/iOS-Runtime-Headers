/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGPipelineDissector.h>
#import <libobjc.A.dylib/SGMailMessageProcessing.h>
#import <libobjc.A.dylib/SGTextMessageProcessing.h>

@class SGMEventICSOpportunity, SGAccountsAdapter, NSString;

@interface SGCalendarAttachmentDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {

	SGMEventICSOpportunity* _icsOpportunityTracker;
	SGAccountsAdapter* _accountsAdapter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)splitAttachment:(id)arg1 intoEvents:(id)arg2 withTimezones:(id)arg3 ;
+(id)baseAttachmentFrom:(id)arg1 includingEvents:(id)arg2 withRanges:(id)arg3 ;
+(long long)replaceTzid:(id)arg1 inDocument:(id)arg2 fromOriginal:(id)arg3 withBaseLength:(unsigned long long)arg4 withEventRange:(NSRange)arg5 ;
-(id)init;
-(SGMEventICSSourceType_)accountTypeFor:(id)arg1 ;
-(void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(id)downloadedCalendarAttachmentsFrom:(id)arg1 ;
-(BOOL)hasCalendarAccountForOneOf:(id)arg1 ;
-(void)_dissectMessage:(id)arg1 entity:(id)arg2 ;
-(id)enrichmentsFromData:(id)arg1 inDocument:(id)arg2 parentMessage:(id)arg3 parentEntity:(id)arg4 ;
-(BOOL)shouldIgnoreEntity:(id)arg1 ;
-(BOOL)isRequestFromSharedCalendarProvider:(id)arg1 ;
-(void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
@end

