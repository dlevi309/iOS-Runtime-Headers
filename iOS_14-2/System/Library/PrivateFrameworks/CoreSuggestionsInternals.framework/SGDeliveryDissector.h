/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGPipelineDissector.h>
#import <libobjc.A.dylib/SGMailMessageProcessing.h>
#import <libobjc.A.dylib/SGTextMessageProcessing.h>

@class NSString;

@interface SGDeliveryDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(id)_createEnrichmentsForDetections:(id)arg1 entity:(id)arg2 ;
-(void)_logUniqueEnrichments:(id)arg1 ;
-(id)createEnrichmentWithMatch:(id)arg1 onParentEntity:(id)arg2 ;
-(void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(void)_logDeliverySenderForSenderDomain:(id)arg1 ;
@end

