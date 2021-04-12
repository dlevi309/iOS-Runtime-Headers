/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKSourceAuthorizationControllerDelegate;
@class HKHealthStore, HKSource, NSArray, NSMutableSet, NSSet, NSDictionary;

@interface HKSourceAuthorizationController : NSObject {

	BOOL _isUpdatingAllTypes;
	HKHealthStore* _healthStore;
	HKSource* _source;
	id<HKSourceAuthorizationControllerDelegate> _delegate;
	NSArray* _orderedTypesForSharing;
	NSArray* _orderedTypesForReading;
	NSMutableSet* _typesEnabledForSharing;
	NSMutableSet* _typesEnabledForReading;
	NSSet* _requestedTypesForSharing;
	NSSet* _requestedTypesForReading;
	NSDictionary* _requestedDocumentAuths;

}

@property (nonatomic,retain) NSArray * orderedTypesForSharing;                                         //@synthesize orderedTypesForSharing=_orderedTypesForSharing - In the implementation block
@property (nonatomic,retain) NSArray * orderedTypesForReading;                                         //@synthesize orderedTypesForReading=_orderedTypesForReading - In the implementation block
@property (nonatomic,retain) NSMutableSet * typesEnabledForSharing;                                    //@synthesize typesEnabledForSharing=_typesEnabledForSharing - In the implementation block
@property (nonatomic,retain) NSMutableSet * typesEnabledForReading;                                    //@synthesize typesEnabledForReading=_typesEnabledForReading - In the implementation block
@property (nonatomic,retain) NSSet * requestedTypesForSharing;                                         //@synthesize requestedTypesForSharing=_requestedTypesForSharing - In the implementation block
@property (nonatomic,retain) NSSet * requestedTypesForReading;                                         //@synthesize requestedTypesForReading=_requestedTypesForReading - In the implementation block
@property (nonatomic,retain) NSDictionary * requestedDocumentAuths;                                    //@synthesize requestedDocumentAuths=_requestedDocumentAuths - In the implementation block
@property (assign,nonatomic) BOOL isUpdatingAllTypes;                                                  //@synthesize isUpdatingAllTypes=_isUpdatingAllTypes - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                                            //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKSource * source;                                                      //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) id<HKSourceAuthorizationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL anyTypeRequested; 
-(id<HKSourceAuthorizationControllerDelegate>)delegate;
-(void)setDelegate:(id<HKSourceAuthorizationControllerDelegate>)arg1 ;
-(HKSource *)source;
-(HKHealthStore *)healthStore;
-(void)reload;
-(id)initWithHealthStore:(id)arg1 source:(id)arg2 typesForSharing:(id)arg3 typesForReading:(id)arg4 ;
-(BOOL)anyTypeRequested;
-(BOOL)anyTypeEnabled;
-(NSMutableSet *)typesEnabledForReading;
-(long long)_authorizationStatusWithType:(id)arg1 ;
-(BOOL)allTypesEnabled;
-(NSArray *)orderedTypesForReading;
-(void)_reloadTypeAuthorizationRecords;
-(void)_reloadDocumentAuthorizationRecords;
-(void)setRequestedDocumentAuths:(NSDictionary *)arg1 ;
-(id)_sortedTypes:(id)arg1 ;
-(id)typesInSection:(long long)arg1 ;
-(id)_enabledTypesInSection:(long long)arg1 ;
-(BOOL)_parentTypeDisabledForType:(id)arg1 inSection:(long long)arg2 ;
-(id)_enabledSubTypesForType:(id)arg1 inSection:(long long)arg2 ;
-(void)_updateAuthorizationStatusWithTypes:(id)arg1 ;
-(BOOL)isTypeEnabled:(id)arg1 inSection:(long long)arg2 ;
-(BOOL)allTypesEnabledInSection:(long long)arg1 ;
-(NSArray *)orderedTypesForSharing;
-(void)setEnabled:(BOOL)arg1 forType:(id)arg2 inSection:(long long)arg3 commit:(BOOL)arg4 ;
-(void)_setAuthorizationStatuses:(id)arg1 ;
-(BOOL)isRequestingDocumentAuthorization;
-(unsigned long long)countOfTypesInSection:(long long)arg1 ;
-(id)objectAuthorizationStatusesForDocuments;
-(void)commitObjectAuthorizationStatuses:(id)arg1 ;
-(void)resetObjectAuthorizationStatuses;
-(void)setEnabled:(BOOL)arg1 forAllTypesInSection:(long long)arg2 commit:(BOOL)arg3 ;
-(void)commitAuthorizationStatuses;
-(void)setOrderedTypesForSharing:(NSArray *)arg1 ;
-(void)setOrderedTypesForReading:(NSArray *)arg1 ;
-(NSMutableSet *)typesEnabledForSharing;
-(void)setTypesEnabledForSharing:(NSMutableSet *)arg1 ;
-(void)setTypesEnabledForReading:(NSMutableSet *)arg1 ;
-(NSSet *)requestedTypesForSharing;
-(void)setRequestedTypesForSharing:(NSSet *)arg1 ;
-(NSSet *)requestedTypesForReading;
-(void)setRequestedTypesForReading:(NSSet *)arg1 ;
-(NSDictionary *)requestedDocumentAuths;
-(BOOL)isUpdatingAllTypes;
-(void)setIsUpdatingAllTypes:(BOOL)arg1 ;
@end

