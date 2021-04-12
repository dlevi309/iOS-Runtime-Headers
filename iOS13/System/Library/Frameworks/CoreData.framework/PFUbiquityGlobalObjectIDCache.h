/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquityGlobalObjectIDCache : NSObject {

	NSString* _storeName;
	NSString* _localPeerID;
	NSMutableDictionary* _peerIDToEntityNameToPrimaryKey;
	NSRecursiveLock* _peerIDToEntityNameToPrimaryKeyLock;

}

@property (nonatomic,retain) NSString * storeName;                //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,retain) NSString * localPeerID;              //@synthesize localPeerID=_localPeerID - In the implementation block
+(id)stringValueFromArray:(id)arg1 atIndexDescribedByStringNumber:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setStoreName:(NSString *)arg1 ;
-(NSString *)localPeerID;
-(NSString *)storeName;
-(void)setLocalPeerID:(NSString *)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2 ;
-(id)createGlobalIDForCompressedString:(id)arg1 withEntityNames:(id)arg2 primaryKeys:(id)arg3 peerIDs:(id)arg4 ;
-(void)purgeCache;
-(id)createGlobalIDForGlobalIDString:(id)arg1 ;
-(id)createGlobalIDForPrimaryKeyString:(id)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3 ;
-(id)createGlobalIDForPrimarKey:(unsigned long long)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3 ;
@end

