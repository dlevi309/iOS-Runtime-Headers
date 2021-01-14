/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary, TPSAssetSizes;

@interface TPSContentPackage : NSObject <NSCopying, NSSecureCoding> {

	NSString* _language;
	NSArray* _orderedCollectionIdentifiers;
	NSDictionary* _collectionMap;
	NSDictionary* _tipMap;
	TPSAssetSizes* _assetSizes;

}

@property (nonatomic,retain) NSString * language;                                 //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSArray * orderedCollectionIdentifiers;              //@synthesize orderedCollectionIdentifiers=_orderedCollectionIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * collectionMap;                        //@synthesize collectionMap=_collectionMap - In the implementation block
@property (nonatomic,retain) NSDictionary * tipMap;                               //@synthesize tipMap=_tipMap - In the implementation block
@property (nonatomic,retain) TPSAssetSizes * assetSizes;                          //@synthesize assetSizes=_assetSizes - In the implementation block
@property (nonatomic,readonly) NSArray * orderedCollections; 
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)setLanguage:(NSString *)arg1 ;
-(NSDictionary *)tipMap;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(TPSAssetSizes *)assetSizes;
-(void)setAssetSizes:(TPSAssetSizes *)arg1 ;
-(void)setTipMap:(NSDictionary *)arg1 ;
-(NSArray *)orderedCollectionIdentifiers;
-(void)setOrderedCollectionIdentifiers:(NSArray *)arg1 ;
-(NSDictionary *)collectionMap;
-(void)setCollectionMap:(NSDictionary *)arg1 ;
-(NSArray *)orderedCollections;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

