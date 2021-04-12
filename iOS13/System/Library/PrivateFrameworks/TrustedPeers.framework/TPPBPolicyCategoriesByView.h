/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface TPPBPolicyCategoriesByView : PBCodable <NSCopying> {

	NSMutableArray* _categories;
	NSString* _view;

}

@property (nonatomic,readonly) BOOL hasView; 
@property (nonatomic,retain) NSString * view;                          //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) NSMutableArray * categories;              //@synthesize categories=_categories - In the implementation block
+(Class)categoriesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)view;
-(void)setView:(NSString *)arg1 ;
-(NSMutableArray *)categories;
-(void)setCategories:(NSMutableArray *)arg1 ;
-(BOOL)hasView;
-(void)clearCategories;
-(void)addCategories:(id)arg1 ;
-(unsigned long long)categoriesCount;
-(id)categoriesAtIndex:(unsigned long long)arg1 ;
@end

