/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <libobjc.A.dylib/CHSChronoWidgetServiceClient.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol CHSChronoWidgetServiceServer;
@class NSDictionary, NSMutableSet, NSSet, NSString;

@interface CHSAvocadoDescriptorProvider : NSObject <CHSChronoWidgetServiceClient, BSDescriptionProviding> {

	NSDictionary* _descriptorsByExtensionIdentifier;
	NSMutableSet* _observers;
	id<CHSChronoWidgetServiceServer> _server;

}

@property (nonatomic,copy) NSDictionary * descriptorsByExtensionIdentifier;              //@synthesize descriptorsByExtensionIdentifier=_descriptorsByExtensionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * observers;                            //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) id<CHSChronoWidgetServiceServer> server;                  //@synthesize server=_server - In the implementation block
@property (nonatomic,copy,readonly) NSSet * descriptors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)addObserver:(id)arg1 ;
-(NSSet *)descriptors;
-(NSMutableSet *)observers;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSDictionary *)descriptorsByExtensionIdentifier;
-(id)_descriptionForArray:(id)arg1 name:(id)arg2 ;
-(id)initWithServer:(id)arg1 ;
-(NSString *)description;
-(id<CHSChronoWidgetServiceServer>)server;
-(void)_mainQueue_handleNewDescriptors:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setDescriptorsByExtensionIdentifier:(NSDictionary *)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)_sendApplicationWithBundleIdentifierEnteredForeground:(id)arg1 ;
-(id)descriptorForPersonality:(id)arg1 ;
-(void)avocadoDescriptorsDidChange:(id)arg1 ;
@end

