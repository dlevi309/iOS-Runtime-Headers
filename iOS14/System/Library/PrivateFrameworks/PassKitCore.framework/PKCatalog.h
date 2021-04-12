/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class NSMutableArray, NSDate;

@interface PKCatalog : NSObject <NSCopying, NSSecureCoding, PKCloudStoreCoding> {

	NSMutableArray* _groups;
	NSDate* _timestamp;

}

@property (nonatomic,retain) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * groups;              //@synthesize groups=_groups - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)catalogWithLocalCatalog:(id)arg1 ubiquitousCatalog:(id)arg2 ;
+(id)catalogWithContentsOfURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 ;
+(id)catalogWithContentsOfURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 directoryCoordinator:(id)arg3 ;
+(id)recordNamePrefix;
-(id)init;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(id)allGroupIDs;
-(NSMutableArray *)groups;
-(void)writeToURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 atomically:(BOOL)arg3 ;
-(BOOL)isEquivalentToCatalog:(id)arg1 ;
-(BOOL)isNewerThanCatalog:(id)arg1 ;
-(id)description;
-(unsigned long long)itemType;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(id)primaryIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)shuffle:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

