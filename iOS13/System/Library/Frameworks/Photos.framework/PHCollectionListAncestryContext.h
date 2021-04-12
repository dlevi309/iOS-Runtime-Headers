/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol NSFastEnumeration;
@class NSMutableDictionary;

@interface PHCollectionListAncestryContext : NSObject {

	id<NSFastEnumeration> _allCollectionLists;
	NSMutableDictionary* _collectionListsByOID;

}

@property (retain) id<NSFastEnumeration> allCollectionLists;                //@synthesize allCollectionLists=_allCollectionLists - In the implementation block
@property (retain) NSMutableDictionary * collectionListsByOID;              //@synthesize collectionListsByOID=_collectionListsByOID - In the implementation block
-(id)folderForID:(id)arg1 ;
-(id)initWithCollectionLists:(id)arg1 ;
-(id<NSFastEnumeration>)allCollectionLists;
-(void)setAllCollectionLists:(id<NSFastEnumeration>)arg1 ;
-(NSMutableDictionary *)collectionListsByOID;
-(void)setCollectionListsByOID:(NSMutableDictionary *)arg1 ;
@end

