/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <libobjc.A.dylib/ATXProactiveSuggestionClientModelProtocol.h>

@protocol ATXProactiveSuggestionClientModelXPCInterface;
@class NSString, NSXPCConnection;

@interface ATXProactiveSuggestionClientModel : NSObject <ATXProactiveSuggestionClientModelProtocol> {

	NSString* _clientModelId;
	NSString* _notificationId;
	id<ATXProactiveSuggestionClientModelXPCInterface> _suggestionReceiver;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) id<ATXProactiveSuggestionClientModelXPCInterface> suggestionReceiver; 
@property (nonatomic,readonly) NSString * clientModelId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)refreshBlendingLayer;
+(long long)actionConversionTypeForClientModelType:(long long)arg1 ;
+(BOOL)clientModelTypeIsShortcutConversion:(long long)arg1 ;
+(id)clientModelIdsFromClientModelTypesArray:(id)arg1 ;
+(BOOL)clientModelTypeIsEligibleForShortcutConversion:(long long)arg1 ;
+(long long)clientModelTypeFromClientModelId:(id)arg1 ;
+(id)clientModelIdFromClientModelType:(long long)arg1 ;
-(NSString *)clientModelId;
-(void)updateSuggestions:(id)arg1 ;
-(void)updateSuggestions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)transmitNotificationIdToSuggestionReceiver:(id)arg1 ;
-(id)remoteAsyncSuggestionReceiver;
-(void)retrieveCurrentSuggestionsWithReply:(/*^block*/id)arg1 ;
-(id)initWithClientModelId:(id)arg1 notificationId:(id)arg2 suggestionReceiver:(id)arg3 ;
-(void)updateSuggestions:(id)arg1 feedbackMetadata:(id)arg2 ;
-(id<ATXProactiveSuggestionClientModelXPCInterface>)suggestionReceiver;
-(void)transmitSuggestionsToReceiver:(id)arg1 feedbackMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateSuggestions:(id)arg1 feedbackMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)retrieveAvailableCriterionIdentifiersWithReply:(/*^block*/id)arg1 ;
-(void)setupRemoteClientXPCConnection;
-(id)initWithClientModelId:(id)arg1 notificationId:(id)arg2 ;
-(void)dealloc;
@end

