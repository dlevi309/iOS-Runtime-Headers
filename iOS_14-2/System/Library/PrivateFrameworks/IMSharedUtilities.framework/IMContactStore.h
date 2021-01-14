/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@protocol OS_dispatch_queue;
#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class CNContactStore, NSData, NSDictionary, NSMutableDictionary, CNContact, NSObject, NSArray;

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
	NSObject*<OS_dispatch_queue> _changeHistoryFetchQueue;
	NSArray* _CNIDsForBatchFetch;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                     //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSData * changeHistoryToken;                                       //@synthesize changeHistoryToken=_changeHistoryToken - In the implementation block
@property (nonatomic,retain) NSDictionary * handleIDToCNIDMap;                                  //@synthesize handleIDToCNIDMap=_handleIDToCNIDMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * CNIDToHandleIDsMap;                          //@synthesize CNIDToHandleIDsMap=_CNIDToHandleIDsMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * IDToCNContactMap;                            //@synthesize IDToCNContactMap=_IDToCNContactMap - In the implementation block
@property (assign,nonatomic) BOOL batchFetchingForLaunchCompleted;                              //@synthesize batchFetchingForLaunchCompleted=_batchFetchingForLaunchCompleted - In the implementation block
@property (assign,nonatomic) double lastContactStoreSync;                                       //@synthesize lastContactStoreSync=_lastContactStoreSync - In the implementation block
@property (assign,nonatomic) double lastMeContactStoreSync;                                     //@synthesize lastMeContactStoreSync=_lastMeContactStoreSync - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                             //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> changeHistoryFetchQueue;              //@synthesize changeHistoryFetchQueue=_changeHistoryFetchQueue - In the implementation block
@property (nonatomic,retain) NSArray * CNIDsForBatchFetch;                                      //@synthesize CNIDsForBatchFetch=_CNIDsForBatchFetch - In the implementation block
+(id)descriptionForCNContact:(id)arg1 ;
+(id)sharedInstance;
+(id)phoneticFullNameForCNContact:(id)arg1 ;
+(id)createMutableContactWithMapURL:(id)arg1 andLocalizedLocationString:(id)arg2 ;
+(id)validateAndCleanupID:(id)arg1 ;
+(Class)IMCNLabeledValueClass;
+(id)dialingForCurrentLocale;
+(BOOL)shouldShowNickNames;
+(Class)IMCNContactFormatterClass;
+(id)kIMCNContactPhoneNumbersKey;
+(id)firstNameForCNContact:(id)arg1 ;
+(Class)IMCNPhoneNumberClass;
+(id)predicateForID:(id)arg1 ;
+(Class)IMCNChangeHistoryFetchRequestClass;
+(id)companyNameForCNContact:(id)arg1 ;
+(id)emailsForCNContact:(id)arg1 ;
+(id)nickNameForCNContact:(id)arg1 ;
+(Class)IMCNMutableContactClass;
+(id)createMutableContactWithID:(id)arg1 ;
+(Class)IMCNGeminiManagerClass;
+(BOOL)shouldShowAbbreviatedNames;
+(id)kIMCNContactLinkIdentifierKey;
+(id)abbreviatedNameForCNContact:(id)arg1 ;
+(id)keysForNicknameHandling;
+(id)displayNameWithPhoneNumberOrEmailForContact:(id)arg1 ;
+(Class)IMCNMeCardSharingPickerViewControllerClass;
+(id)validateAndFilterIDsForContactsBatchFetch:(id)arg1 ;
+(id)keysForCNContact;
+(id)phoneticLastNameForCNContact:(id)arg1 ;
+(id)dialingCodeForID:(id)arg1 ;
+(id)fullNameForCNContact:(id)arg1 ;
+(id)kIMCNContactEmailAddressesKey;
+(id)kIMCNContactImageDataKey;
+(id)kIMCNContactIdentifierKey;
+(id)kIMCNContactImageDataAvailableKey;
+(id)lastNameForCNContact:(id)arg1 ;
+(id)IDsFromCNContact:(id)arg1 ;
+(id)keysForMeContact;
+(BOOL)isCNContactAKnownContact:(id)arg1 ;
+(id)_stringFromContact:(id)arg1 withStyle:(long long)arg2 ;
+(id)kIMCNContactThumbnailImageDataKey;
+(id)displayNameForContact:(id)arg1 ;
+(id)displayNameWithCNNickNameOrFullNameOrCompanyNameOrAbbreviatedForContact:(id)arg1 ;
+(id)mePredicate;
+(id)phoneticFirstNameForCNContact:(id)arg1 ;
+(Class)IMCNContactFetchRequestClass;
+(id)phoneNumbersForCNContact:(id)arg1 ;
+(id)kIMCNContactCropRectKey;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContactStore *)contactStore;
-(CNContact *)meContact;
-(id)fetchCNContactForHandleID:(id)arg1 withKeys:(id)arg2 ;
-(id)init;
-(NSMutableDictionary *)CNIDToHandleIDsMap;
-(BOOL)batchFetchingForLaunchCompleted;
-(id)completedContact:(id)arg1 withKeys:(id)arg2 ;
-(NSData *)changeHistoryToken;
-(void)logCNContact:(id)arg1 andID:(id)arg2 ;
-(void)logHandleID:(id)arg1 ;
-(void)addIDToCNIDToHandleIDsMap:(id)arg1 withCNID:(id)arg2 ;
-(id)getAllKeysFromIDToCNContactMap;
-(void)checkForContactStoreChanges;
-(void)generateCNIDToHandleIDMap;
-(id)getCurrentHistoryToken;
-(void)logHandleIDs:(id)arg1 ;
-(double)lastMeContactStoreSync;
-(void)_logDictionaryInformation:(id)arg1 inRange:(NSRange)arg2 ;
-(id)fetchMeContactWithKeys:(id)arg1 ;
-(void)logDictionary:(id)arg1 inBatchesOfSize:(long long)arg2 ;
-(void)setLastMeContactStoreSync:(double)arg1 ;
-(void)addContact:(id)arg1 withID:(id)arg2 ;
-(NSArray *)CNIDsForBatchFetch;
-(id)fetchMeContactWithKeys:(id)arg1 withError:(id*)arg2 ;
-(void)setBatchFetchingCompleted;
-(void)removeIDFromCNIDToHandleIDsMap:(id)arg1 withCNID:(id)arg2 ;
-(void)setCNIDToHandleIDsMap:(NSMutableDictionary *)arg1 ;
-(BOOL)isContactWithIDAlreadyFetched:(id)arg1 ;
-(void)logDictionary:(id)arg1 ;
-(void)handleDropEverythingEvent;
-(void)logCurrentHistoryToken;
-(void)logContactFetchRequestResults:(id)arg1 ;
-(void)cacheBatchFetchResults:(id)arg1 handleIDsWithoutCNID:(id)arg2 ;
-(void)logCNContact:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)changeHistoryFetchQueue;
-(id)fetchCNContactWithIdentifier:(id)arg1 ;
-(void)meCardChanged:(id)arg1 ;
-(void)contactStoreChanged:(id)arg1 ;
-(double)lastContactStoreSync;
-(void)setLastContactStoreSync:(double)arg1 ;
-(void)setIDToCNContactMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)IDToCNContactMap;
-(void)setChangeHistoryFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_logArray:(id)arg1 inBatchesOfSize:(long long)arg2 ;
-(id)initWithContactStore:(id)arg1 ;
-(BOOL)isIDAKnownContact:(id)arg1 ;
-(id)getHandleIDToCNIDMap;
-(id)fetchCNContactForHandleWithID:(id)arg1 ;
-(void)resetMeCard;
-(id)getContactStore;
-(void)replaceWithMutableContactForID:(id)arg1 ;
-(void)setChangeHistoryToken:(NSData *)arg1 ;
-(void)replaceContact:(id)arg1 withID:(id)arg2 ;
-(id)getCNIDToHandleIDsMap;
-(void)setHandleIDToCNIDMap:(NSDictionary *)arg1 ;
-(NSDictionary *)handleIDToCNIDMap;
-(id)handleIDsForCNID:(id)arg1 ;
-(void)setBatchFetchingForLaunchCompleted:(BOOL)arg1 ;
-(void)setCNIDsForBatchFetch:(NSArray *)arg1 ;
-(void)fetchCNContactsForHandlesWithIDs:(id)arg1 isFinalBatch:(BOOL)arg2 ;
-(id)getIDToCNContactMap;
-(BOOL)isBatchFetchingForLaunchCompleted;
-(void)removeContactWithID:(id)arg1 ;
-(id)getContactForID:(id)arg1 ;
-(void)addEntriesToIDToCNContactMap:(id)arg1 ;
-(void)dealloc;
@end

