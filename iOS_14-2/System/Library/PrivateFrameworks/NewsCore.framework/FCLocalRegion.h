/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSString, NSArray, NSMutableSet;

@interface FCLocalRegion : NSObject {

	NSString* _identifier;
	NSArray* _autoFavoriteTagIDs;
	NSArray* _localVersionedTagIDs;
	NSString* _name;
	NSMutableSet* _areas;
	CGRect _rect;

}

@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableSet * areas;                          //@synthesize areas=_areas - In the implementation block
@property (assign,nonatomic) CGRect rect;                                   //@synthesize rect=_rect - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * autoFavoriteTagIDs;                //@synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs - In the implementation block
@property (nonatomic,readonly) NSArray * localVersionedTagIDs;              //@synthesize localVersionedTagIDs=_localVersionedTagIDs - In the implementation block
-(CGRect)rect;
-(NSMutableSet *)areas;
-(id)init;
-(void)setRect:(CGRect)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)addLocalArea:(id)arg1 ;
-(CGRect)rectForEntireRegion;
-(NSArray *)localVersionedTagIDs;
-(NSArray *)autoFavoriteTagIDs;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setAreas:(NSMutableSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

