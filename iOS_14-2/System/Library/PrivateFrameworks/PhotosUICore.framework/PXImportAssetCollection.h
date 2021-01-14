/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseDisplayCollection.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray, NSMutableSet, NSString;

@interface PXImportAssetCollection : PXBaseDisplayCollection <NSCopying> {

	NSObject*<OS_dispatch_queue> _assetQueue;
	NSMutableArray* _assetList;
	NSArray* _arrangedAssetList;
	NSMutableSet* _assetUUIDs;
	BOOL _needsSorting;
	BOOL _alreadyImportedGroup;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL alreadyImportedGroup;              //@synthesize alreadyImportedGroup=_alreadyImportedGroup - In the implementation block
+(id)dayFormatter;
-(id)localizedTitle;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(long long)numberOfItems;
-(void)arrangedObjects:(/*^block*/id)arg1 ;
-(BOOL)alreadyImportedGroup;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(id)arrangedObjects;
-(id)unsortedObjects;
-(void)setAlreadyImportedGroup:(BOOL)arg1 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(long long)indexOfItem:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

