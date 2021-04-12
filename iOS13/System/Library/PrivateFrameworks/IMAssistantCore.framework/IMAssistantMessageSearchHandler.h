/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/

#import <IMAssistantCore/IMAssistantMessageQueryHandler.h>
#import <libobjc.A.dylib/INSearchForMessagesIntentHandling.h>

@protocol IMAssistantMessageAttributeSanitizer;
@class NSString;

@interface IMAssistantMessageSearchHandler : IMAssistantMessageQueryHandler <INSearchForMessagesIntentHandling> {

	id<IMAssistantMessageAttributeSanitizer> _attributeSanitizer;

}

@property (nonatomic,retain) id<IMAssistantMessageAttributeSanitizer> attributeSanitizer;              //@synthesize attributeSanitizer=_attributeSanitizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleSearchForMessages:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveRecipientsForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveSendersForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveAttributesForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveSpeakableGroupNamesForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithDataSource:(id)arg1 intentIdentifier:(id)arg2 ;
-(id)initWithAttributeSanitizer:(id)arg1 intentIdentifier:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 attributeSanitizer:(id)arg2 intentIdentifier:(id)arg3 ;
-(id<IMAssistantMessageAttributeSanitizer>)attributeSanitizer;
-(id)resolveSpeakableGroupNames:(id)arg1 forIntent:(id)arg2 ;
-(void)resolveRecipientsAndSender:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithIntentIdentifier:(id)arg1 ;
-(void)setAttributeSanitizer:(id<IMAssistantMessageAttributeSanitizer>)arg1 ;
@end

