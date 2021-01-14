/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol _ICContactFetchingDelegate;
#import <TextInputCore/TextInputCore-Structs.h>
@class NSArray, TIInputMode, NSString, TILanguageModelAdaptationContext;

@interface TILanguageModelLoader : NSObject {

	NSArray* _staticResourcePaths;
	BOOL _usesLinguisticContext;
	id<_ICContactFetchingDelegate> _contactFetchingDelegate;
	TIInputMode* _inputMode;
	NSString* _dynamicResourcePath;
	NSArray* _mobileAssets;
	NSString* _clientIdentifier;
	NSString* _recipientIdentifier;
	TILanguageModelAdaptationContext* _adaptationContext;
	shared_ptr<KB::LanguageModel>* _model;

}

@property (assign,nonatomic) shared_ptr<KB::LanguageModel>* model;                                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) TIInputMode * inputMode;                                           //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,readonly) NSArray * staticResourcePaths; 
@property (nonatomic,readonly) NSString * dynamicResourcePath;                                    //@synthesize dynamicResourcePath=_dynamicResourcePath - In the implementation block
@property (nonatomic,readonly) NSArray * mobileAssets;                                            //@synthesize mobileAssets=_mobileAssets - In the implementation block
@property (nonatomic,readonly) BOOL usesLinguisticContext;                                        //@synthesize usesLinguisticContext=_usesLinguisticContext - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                                         //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * recipientIdentifier;                                      //@synthesize recipientIdentifier=_recipientIdentifier - In the implementation block
@property (nonatomic,retain) TILanguageModelAdaptationContext * adaptationContext;                //@synthesize adaptationContext=_adaptationContext - In the implementation block
@property (assign,nonatomic) id<_ICContactFetchingDelegate> contactFetchingDelegate;              //@synthesize contactFetchingDelegate=_contactFetchingDelegate - In the implementation block
+(void)contactStoreDidChange:(id)arg1 ;
+(void)setAsynchronousLoad:(BOOL)arg1 ;
+(id)knownClients;
+(void)setOfflineTrainingEnabled:(BOOL)arg1 ;
+(id)sharedLanguageModelLoaderForInputMode:(id)arg1 staticResourcePaths:(id)arg2 dynamicResourcePath:(id)arg3 mobileAssets:(id)arg4 usesLinguisticContext:(BOOL)arg5 ;
+(void)resetClientAndRecipientCache;
+(void)performMaintenance;
+(void)clearDynamicResourcesAtPath:(id)arg1 ;
+(void)clearDynamicLearningCaches;
+(shared_ptr<KB::LanguageModel>*)stubForLocale:(id)arg1 adaptationContext:(id)arg2 staticResourcePaths:(id)arg3 dynamicResourcePath:(id)arg4 ;
+(void)startObservingContactStore;
+(id)recipientRecords;
+(void)flushDynamicLearningCaches;
+(void)dropResourcesExcludingInputModes:(id)arg1 flushCache:(BOOL)arg2 ;
+(shared_ptr<KB::LanguageModel>*)modelForLocale:(id)arg1 adaptationContext:(id)arg2 staticResourcePaths:(id)arg3 dynamicResourcePath:(id)arg4 ;
-(TIInputMode *)inputMode;
-(shared_ptr<KB::LanguageModel>*)model;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(void)setModel:(shared_ptr<KB::LanguageModel>*)arg1 ;
-(NSString *)recipientIdentifier;
-(NSString *)dynamicResourcePath;
-(void)clearDynamicLearningCaches;
-(TILanguageModelAdaptationContext *)adaptationContext;
-(NSString *)clientIdentifier;
-(void)flushDynamicLearningCaches;
-(id)initWithInputMode:(id)arg1 staticResourcePaths:(id)arg2 dynamicResourcePath:(id)arg3 mobileAssets:(id)arg4 usesLinguisticContext:(BOOL)arg5 ;
-(NSArray *)staticResourcePaths;
-(void)performLearningIfNecessaryForClient:(id)arg1 withModel:(shared_ptr<KB::LanguageModel>*)arg2 ;
-(BOOL)hasLanguageModelBundle;
-(shared_ptr<KB::LanguageModel>*)newLanguageModel;
-(void)setLanguageModelClientIdentifier:(id)arg1 ;
-(void)findRecordsMatchingRecipient:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)lookupRecordForRecipientIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLanguageModelRecipientIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(shared_ptr<KB::LanguageModel>*)sharedLanguageModelForClient:(id)arg1 withRecipient:(id)arg2 ;
-(shared_ptr<KB::LanguageModel>*)sharedLanguageModelForClient:(id)arg1 withRecipient:(id)arg2 completion:(/*^block*/id)arg3 ;
-(shared_ptr<KB::LanguageModel>*)lightweightLanguageModel;
-(shared_ptr<KB::LanguageModel>*)languageModelForAdaptationContext:(id)arg1 ;
-(id<_ICContactFetchingDelegate>)contactFetchingDelegate;
-(void)setContactFetchingDelegate:(id<_ICContactFetchingDelegate>)arg1 ;
-(NSArray *)mobileAssets;
-(BOOL)usesLinguisticContext;
@end

