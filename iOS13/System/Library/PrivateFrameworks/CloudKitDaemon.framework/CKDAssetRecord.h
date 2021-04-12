/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString, CKRecordID, NSMutableDictionary, NSNumber, NSArray;

@interface CKDAssetRecord : NSObject {

	NSString* _recordType;
	CKRecordID* _recordID;
	NSMutableDictionary* _itemsByRecordKey;
	NSMutableDictionary* _rereferencedItemsByRecordKey;
	NSMutableDictionary* _sectionItemsByRecordKey;
	NSNumber* _sizeUpperBoundNumber;
	NSNumber* _rerefSizeUpperBoundNumber;

}

@property (nonatomic,retain) NSMutableDictionary * itemsByRecordKey;                          //@synthesize itemsByRecordKey=_itemsByRecordKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * rereferencedItemsByRecordKey;              //@synthesize rereferencedItemsByRecordKey=_rereferencedItemsByRecordKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionItemsByRecordKey;                   //@synthesize sectionItemsByRecordKey=_sectionItemsByRecordKey - In the implementation block
@property (nonatomic,retain) NSNumber * sizeUpperBoundNumber;                                 //@synthesize sizeUpperBoundNumber=_sizeUpperBoundNumber - In the implementation block
@property (nonatomic,retain) NSNumber * rerefSizeUpperBoundNumber;                            //@synthesize rerefSizeUpperBoundNumber=_rerefSizeUpperBoundNumber - In the implementation block
@property (nonatomic,readonly) NSString * recordType;                                         //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,readonly) CKRecordID * recordID;                                         //@synthesize recordID=_recordID - In the implementation block
@property (readonly) unsigned sizeUpperBound; 
@property (readonly) unsigned rerefSizeUpperBound; 
@property (nonatomic,readonly) NSArray * allMMCSItems; 
@property (nonatomic,readonly) NSArray * allMMCSSectionItems; 
-(id)description;
-(BOOL)isEmpty;
-(NSString *)recordType;
-(CKRecordID *)recordID;
-(id)initWithRecordType:(id)arg1 recordID:(id)arg2 ;
-(id)CKPropertiesDescription;
-(unsigned)sizeUpperBound;
-(BOOL)isPackageSectionRecord;
-(id)allRecordKeys;
-(void)addMMCSItem:(id)arg1 ;
-(void)addRereferencedMMCSItem:(id)arg1 ;
-(void)addMMCSSectionItem:(id)arg1 ;
-(unsigned)rerefSizeUpperBound;
-(NSArray *)allMMCSItems;
-(id)allRereferenceMMCSItems;
-(NSArray *)allMMCSSectionItems;
-(id)allMMCSAndSectionItems;
-(id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)arg1 ;
-(id)allRegularAndSectionAndRereferenceItems;
-(id)firstMMCSItemError;
-(id)firstMMCSSectionItemError;
-(BOOL)isAssetRecord;
-(BOOL)isEmptyOfRereferencesAssets;
-(NSMutableDictionary *)itemsByRecordKey;
-(void)setItemsByRecordKey:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)rereferencedItemsByRecordKey;
-(void)setRereferencedItemsByRecordKey:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sectionItemsByRecordKey;
-(void)setSectionItemsByRecordKey:(NSMutableDictionary *)arg1 ;
-(NSNumber *)sizeUpperBoundNumber;
-(void)setSizeUpperBoundNumber:(NSNumber *)arg1 ;
-(NSNumber *)rerefSizeUpperBoundNumber;
-(void)setRerefSizeUpperBoundNumber:(NSNumber *)arg1 ;
@end

