/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCSolTagID : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isFavorited;
	BOOL _isAutoFavorited;
	BOOL _isGroupable;
	NSString* _identifier;
	unsigned long long _whitelistLevel;
	double _specificity;

}

@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long whitelistLevel;              //@synthesize whitelistLevel=_whitelistLevel - In the implementation block
@property (assign,nonatomic) double specificity;                             //@synthesize specificity=_specificity - In the implementation block
@property (assign,nonatomic) BOOL isFavorited;                               //@synthesize isFavorited=_isFavorited - In the implementation block
@property (assign,nonatomic) BOOL isAutoFavorited;                           //@synthesize isAutoFavorited=_isAutoFavorited - In the implementation block
@property (assign,nonatomic) BOOL isGroupable;                               //@synthesize isGroupable=_isGroupable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)orphanID;
+(id)discardedOrphanID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithID:(id)arg1 ;
-(BOOL)isGroupable;
-(void)setIsGroupable:(BOOL)arg1 ;
-(void)setWhitelistLevel:(unsigned long long)arg1 ;
-(void)setSpecificity:(double)arg1 ;
-(void)setIsFavorited:(BOOL)arg1 ;
-(void)setIsAutoFavorited:(BOOL)arg1 ;
-(id)initWithID:(id)arg1 subscibedTags:(id)arg2 autoFavoritedTags:(id)arg3 groupableTags:(id)arg4 whitelistLevel:(unsigned long long)arg5 rules:(id)arg6 ;
-(unsigned long long)whitelistLevel;
-(double)specificity;
-(BOOL)isFavorited;
-(BOOL)isAutoFavorited;
@end

