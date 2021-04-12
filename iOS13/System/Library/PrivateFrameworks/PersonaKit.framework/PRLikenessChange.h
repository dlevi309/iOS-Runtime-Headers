/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
*/


@class NSString, NSNumber, NSArray;

@interface PRLikenessChange : NSObject {

	NSString* _identifier;
	unsigned long long _type;
	NSString* _changedLikenessID;
	NSNumber* _changedLikenessVersion;
	NSArray* _dirtyLikenessProperties;

}

@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * changedLikenessID;                   //@synthesize changedLikenessID=_changedLikenessID - In the implementation block
@property (nonatomic,copy) NSNumber * changedLikenessVersion;              //@synthesize changedLikenessVersion=_changedLikenessVersion - In the implementation block
@property (nonatomic,copy) NSArray * dirtyLikenessProperties;              //@synthesize dirtyLikenessProperties=_dirtyLikenessProperties - In the implementation block
+(id)descriptionForChangeType:(unsigned long long)arg1 ;
+(id)changeForLikeness:(id)arg1 withType:(unsigned long long)arg2 ;
+(unsigned long long)changeTypeFromDescription:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)changedLikenessID;
-(void)setChangedLikenessID:(NSString *)arg1 ;
-(NSNumber *)changedLikenessVersion;
-(void)setChangedLikenessVersion:(NSNumber *)arg1 ;
-(NSArray *)dirtyLikenessProperties;
-(void)setDirtyLikenessProperties:(NSArray *)arg1 ;
@end

