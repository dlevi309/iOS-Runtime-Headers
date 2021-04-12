/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)storeName;
-(id)init;
-(NSString *)localPeerID;
-(void)purgeCache;
-(void)setLocalPeerID:(NSString *)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2 ;
-(id)createGlobalIDForCompressedString:(id)arg1 withEntityNames:(id)arg2 primaryKeys:(id)arg3 peerIDs:(id)arg4 ;
-(void)setStoreName:(NSString *)arg1 ;
-(id)createGlobalIDForGlobalIDString:(id)arg1 ;
-(id)createGlobalIDForPrimaryKeyString:(id)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3 ;
-(id)createGlobalIDForPrimarKey:(unsigned long long)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3 ;
-(void)dealloc;
@end

