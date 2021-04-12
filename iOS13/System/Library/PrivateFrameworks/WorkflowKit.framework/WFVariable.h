/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFVariableStringContent.h>
#import <libobjc.A.dylib/WFVariableSerialization.h>

@class NSArray, NSHashTable, NSDictionary, NSString, WFImage;

@interface WFVariable : NSObject <WFVariableStringContent, WFVariableSerialization> {

	NSArray* _aggrandizements;
	NSHashTable* _delegates;
	NSDictionary* _dictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * propertyName; 
@property (nonatomic,readonly) NSString * nameIncludingPropertyName; 
@property (nonatomic,readonly) NSHashTable * delegates;                                     //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,copy) NSDictionary * dictionary;                                       //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSArray * aggrandizements;                                   //@synthesize aggrandizements=_aggrandizements - In the implementation block
@property (nonatomic,readonly) BOOL supportsAggrandizements; 
@property (nonatomic,readonly) BOOL requiresModernVariableSupport; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) WFImage * icon; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,__weak,readonly) id<WFVariableProvider> variableProvider; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(NSString *)type;
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)UUID;
-(id)serializedRepresentation;
-(BOOL)isAvailable;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(WFImage *)icon;
-(NSString *)propertyName;
-(NSHashTable *)delegates;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)getContentWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)nameIncludingPropertyName;
-(void)wf_getContentItemsWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getObjectRepresentationForClass:(Class)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)requiresModernVariableSupport;
-(id)initWithDictionary:(id)arg1 variableProvider:(id)arg2 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg1 ;
-(id<WFVariableProvider>)variableProvider;
-(unsigned long long)wf_lengthInVariableString;
-(NSArray *)aggrandizements;
-(void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2 ;
-(void)variableProvider:(id)arg1 variableWasMoved:(id)arg2 ;
-(void)variableProviderDidInvalidateOutputDetails:(id)arg1 ;
-(BOOL)supportsAggrandizements;
-(void)variableUpdated;
-(id)possibleContentClasses;
-(id)possibleAggrandizedContentClasses;
-(id)possibleAggrandizedContentClassesWithContext:(id)arg1 ;
-(void)getContentWithContext:(id)arg1 trackContentSource:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)variableBySettingAggrandizements:(id)arg1 ;
@end

