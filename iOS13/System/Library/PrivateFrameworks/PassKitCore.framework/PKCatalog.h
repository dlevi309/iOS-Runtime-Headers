/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)cloudStoreCatalogRecordTypeRecordNamePrefix;
+(id)catalogWithContentsOfURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSMutableArray *)groups;
-(unsigned long long)itemType;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(void)writeToURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 atomically:(BOOL)arg3 ;
-(BOOL)isEquivalentToCatalog:(id)arg1 ;
-(BOOL)isNewerThanCatalog:(id)arg1 ;
-(id)allGroupIDs;
-(void)shuffle:(int)arg1 ;
@end

