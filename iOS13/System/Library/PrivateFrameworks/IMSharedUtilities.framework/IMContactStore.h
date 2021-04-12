/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class CNContactStore, NSData, NSDictionary, NSMutableDictionary, CNContact, NSArray;

@interface IMContactStore : NSObject {

	BOOL _batchFetchingForLaunchCompleted;
	CNContactStore* _contactStore;
	NSData* _changeHistoryToken;
	NSDictionary* _handleIDToCNIDMap;
	NSMutableDictionary* _CNIDToHandleIDsMap;
	NSMutableDictionary* _IDToCNContactMap;
	double _lastContactStoreSync;
	double _lastMeContactStoreSync;
	CNContact* _meContact;
	NSArray* _CNIDsForBatchFetch;

}

@property (nonatomic,retain) CNContactStore * contactStore;                         //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSData * changeHistoryToken;                           //@synthesize changeHistoryToken=_changeHistoryToken - In the implementation block
@property (nonatomic,retain) NSDictionary * handleIDToCNIDMap;                      //@synthesize handleIDToCNIDMap=_handleIDToCNIDMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * CNIDToHandleIDsMap;              //@synthesize CNIDToHandleIDsMap=_CNIDToHandleIDsMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * IDToCNContactMap;                //@synthesize IDToCNContactMap=_IDToCNContactMap - In the implementation block
@property (assign,nonatomic) BOOL batchFetchingForLaunchCompleted;                  //@synthesize batchFetchingForLaunchCompleted=_batchFetchingForLaunchCompleted - In the implementation block
@property (assign,nonatomic) double lastContactStoreSync;                           //@synthesize lastContactStoreSync=_lastContactStoreSync - In the implementation block
@property (assign,nonatomic) double lastMeContactStoreSync;                         //@synthesize lastMeContactStoreSync=_lastMeContactStoreSync - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                 //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,retain) NSArray * CNIDsForBatchFetch;                          //@synthesize CNIDsForBatchFetch=_CNIDsForBatchFetch - In the implementation block
+(id)sharedInstance;
+(id)IDsFromCNContact:(id)arg1 ;
+(id)dialingForCurrentLocale;
+(BOOL)isCNContactAKnownContact:(id)arg1 ;
+(id)displayNameForContact:(id)arg1 ;
+(id)createMutableContactWithID:(id)arg1 ;
+(id)keysForCNContact;
+(Class)IMCNContactFetchRequestClass;
+(id)validateAndFilterIDsForContactsBatchFetch:(id)arg1 ;
+(id)validateAndCleanupID:(id)arg1 ;
+(BOOL)isContactsCachingEnabled;
+(id)predicateForID:(id)arg1 ;
+(id)dialingCodeForID:(id)arg1 ;
+(id)keysForMeContact;
+(id)mePredicate;
+(Class)IMCNChangeHistoryFetchRequestClass;
+(BOOL)shouldShowNickNames;
+(id)nickNameForCNContact:(id)arg1 ;
+(id)fullNameForCNContact:(id)arg1 ;
+(id)companyNameForCNContact:(id)arg1 ;
+(id)displayNameWithCNNickNameOrFullNameOrCompanyNameForContact:(id)arg1 ;
+(id)displayNameWithPhoneNumberOrEmailForContact:(id)arg1 ;
+(id)_stringFromContact:(id)arg1 withStyle:(long long)arg2 ;
+(id)firstNameForCNContact:(id)arg1 ;
+(Class)IMCNContactFormatterClass;
+(id)phoneNumbersForCNContact:(id)arg1 ;
+(id)emailsForCNContact:(id)arg1 ;
+(Class)IMCNMutableContactClass;
+(Class)IMCNLabeledValueClass;
+(Class)IMCNPhoneNumberClass;
+(id)kIMCNContactIdentifierKey;
+(id)kIMCNContactEmailAddressesKey;
+(id)kIMCNContactPhoneNumbersKey;
+(id)kIMCNContactLinkIdentifierKey;
+(Class)IMCNGeminiManagerClass;
+(id)kIMCNContactImageDataAvailableKey;
+(id)kIMCNContactImageDataKey;
+(id)kIMCNContactThumbnailImageDataKey;
+(Class)IMCNMeCardSharingPickerViewControllerClass;
+(id)lastNameForCNContact:(id)arg1 ;
+(id)abbreviatedNameForCNContact:(id)arg1 ;
+(BOOL)shouldShowAbbreviatedNames;
+(id)keysForNicknameHandling;
+(BOOL)isContactsBatchingEnabled;
+(id)descriptionForCNContact:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)handleDropEverythingEvent;
-(id)getContactForID:(id)arg1 ;
-(id)handleIDsForCNID:(id)arg1 ;
-(id)getAllKeysFromIDToCNContactMap;
-(void)replaceContact:(id)arg1 withID:(id)arg2 ;
-(void)replaceWithMutableContactForID:(id)arg1 ;
-(id)getHandleIDToCNIDMap;
-(void)_logDictionaryInBatches:(id)arg1 ofBatchSize:(long long)arg2 ;
-(id)getIDToCNContactMap;
-(id)getCNIDToHandleIDsMap;
-(void)logCNContact:(id)arg1 ;
-(id)getCurrentHistoryToken;
-(id)fetchCNContactForHandleWithID:(id)arg1 ;
-(void)_logDictionaryInformation:(id)arg1 inRange:(NSRange)arg2 ;
-(void)loghandleIDToCNIDMap;
-(void)logIDToCNContactMap;
-(void)logCNIDToHandleIDMap;
-(void)logHandleIDs:(id)arg1 ;
-(void)logContactFetchRequestResults:(id)arg1 ;
-(void)logCurrentHistoryToken;
-(void)logCNContact:(id)arg1 andID:(id)arg2 ;
-(void)logHandleID:(id)arg1 ;
-(void)_logArrayInBatches:(id)arg1 ofBatchSize:(long long)arg2 ;
-(id)initWithContactStore:(id)arg1 ;
-(void)contactStoreChanged:(id)arg1 ;
-(void)meCardChanged:(id)arg1 ;
-(void)addEntriesToIDToCNContactMap:(id)arg1 ;
-(void)cacheBatchFetchResults:(id)arg1 handleIDsWithoutCNID:(id)arg2 ;
-(void)setChangeHistoryToken:(NSData *)arg1 ;
-(void)setBatchFetchingCompleted;
-(void)addContact:(id)arg1 withID:(id)arg2 ;
-(id)fetchCNContactForHandleID:(id)arg1 withKeys:(id)arg2 ;
-(void)generateCNIDToHandleIDMap;
-(NSDictionary *)handleIDToCNIDMap;
-(BOOL)isBatchFetchingForLaunchCompleted;
-(void)checkForContactStoreChanges;
-(void)setMeContact:(CNContact *)arg1 ;
-(void)resetMeCard;
-(id)fetchMeContactWithKeys:(id)arg1 ;
-(id)getContactStore;
-(void)fetchCNContactsForHandlesWithIDs:(id)arg1 isFinalBatch:(BOOL)arg2 ;
-(id)completedContact:(id)arg1 withKeys:(id)arg2 ;
-(void)setHandleIDToCNIDMap:(NSDictionary *)arg1 ;
-(BOOL)isContactWithIDAlreadyFetched:(id)arg1 ;
-(void)removeContactWithID:(id)arg1 ;
-(NSData *)changeHistoryToken;
-(NSMutableDictionary *)CNIDToHandleIDsMap;
-(void)setCNIDToHandleIDsMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)IDToCNContactMap;
-(void)setIDToCNContactMap:(NSMutableDictionary *)arg1 ;
-(BOOL)batchFetchingForLaunchCompleted;
-(void)setBatchFetchingForLaunchCompleted:(BOOL)arg1 ;
-(double)lastContactStoreSync;
-(void)setLastContactStoreSync:(double)arg1 ;
-(double)lastMeContactStoreSync;
-(void)setLastMeContactStoreSync:(double)arg1 ;
-(CNContact *)meContact;
-(NSArray *)CNIDsForBatchFetch;
-(void)setCNIDsForBatchFetch:(NSArray *)arg1 ;
@end

