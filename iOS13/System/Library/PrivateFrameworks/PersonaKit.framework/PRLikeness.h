/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
*/

#import <PersonaKit/PersonaKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSMutableSet, NSDate, NSString, NSSet;

@interface PRLikeness : NSObject <NSSecureCoding> {

	CGImageRef _staticRepresentation;
	NSData* _staticRepresentationData;
	NSMutableSet* _dirtyProperties;
	BOOL _isCurrent;
	unsigned long long _type;
	unsigned long long _scope;
	NSData* _recipe;
	NSDate* _creationDate;
	NSString* _uniqueIdentifier;
	NSString* _externalIdentifier;
	unsigned long long _version;
	NSDate* _expirationDate;
	NSDate* _softExpirationDate;
	NSString* _ownerID;
	long long _source;
	NSDate* _insertionDate;
	CGRect _cropRectForTopLeftOrigin;

}

@property (assign,setter=setCurrent:,nonatomic) BOOL isCurrent;                 //@synthesize isCurrent=_isCurrent - In the implementation block
@property (assign,nonatomic) unsigned long long version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSDate * softExpirationDate;                       //@synthesize softExpirationDate=_softExpirationDate - In the implementation block
@property (nonatomic,retain) NSData * staticRepresentationData; 
@property (nonatomic,retain) NSString * ownerID;                                //@synthesize ownerID=_ownerID - In the implementation block
@property (assign,nonatomic) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long scope;                          //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) long long source;                                  //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * typeDescription; 
@property (nonatomic,readonly) NSString * scopeDescription; 
@property (nonatomic,retain) NSDate * insertionDate;                            //@synthesize insertionDate=_insertionDate - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                             //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSSet * dirtyProperties;                           //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (nonatomic,readonly) BOOL isDirty; 
@property (nonatomic,copy) NSData * recipe;                                     //@synthesize recipe=_recipe - In the implementation block
@property (assign,nonatomic) CGRect cropRectForTopLeftOrigin;                   //@synthesize cropRectForTopLeftOrigin=_cropRectForTopLeftOrigin - In the implementation block
@property (nonatomic,readonly) CGRect cropRectForBottomLeftOrigin; 
@property (nonatomic,readonly) NSString * uniqueIdentifier;                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * externalIdentifier;                       //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_dateFormatter;
+(id)monogramWithRecipe:(id)arg1 staticRepresentation:(CGImageRef)arg2 ;
+(id)photoWithScope:(unsigned long long)arg1 image:(CGImageRef)arg2 ;
+(id)photoWithImage:(CGImageRef)arg1 ;
+(id)monogramWithScope:(unsigned long long)arg1 recipe:(id)arg2 staticRepresentation:(CGImageRef)arg3 ;
+(id)_photoWithScope:(unsigned long long)arg1 image:(CGImageRef)arg2 cropRectForTopLeftOrigin:(CGRect)arg3 ;
+(CGRect)_flippedRectForRect:(CGRect)arg1 relativeToImage:(CGImageRef)arg2 ;
+(id)photoWithImage:(CGImageRef)arg1 cropRectForTopLeftOrigin:(CGRect)arg2 ;
+(id)descriptionForScope:(unsigned long long)arg1 ;
+(id)photoWithImage:(CGImageRef)arg1 cropRectForBottomLeftOrigin:(CGRect)arg2 ;
+(id)photoWithImage:(CGImageRef)arg1 cropRect:(CGRect)arg2 ;
+(id)diddlySquatLikeness;
+(id)likenessWithPropagatedData:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfCropRectForTopLeftOrigin;
+(unsigned long long)scopeFromDescription:(id)arg1 ;
-(id)snapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(id)_accentColorForMonogram;
-(id)_accentColorForPhoto;
-(id)_photoSnapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(id)accentColor;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(unsigned long long)scope;
-(void)setScope:(unsigned long long)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(BOOL)isDirty;
-(void)clearDirtyProperties;
-(NSSet *)dirtyProperties;
-(void)setDirtyProperties:(NSSet *)arg1 ;
-(NSString *)typeDescription;
-(void)setCurrent:(BOOL)arg1 ;
-(NSData *)recipe;
-(void)setRecipe:(NSData *)arg1 ;
-(void)setOwnerID:(NSString *)arg1 ;
-(NSString *)ownerID;
-(CGRect)cropRect;
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(BOOL)isCurrent;
-(void)setStaticRepresentation:(CGImageRef)arg1 ;
-(void)setCropRectForTopLeftOrigin:(CGRect)arg1 ;
-(NSData *)staticRepresentationData;
-(CGRect)cropRectForTopLeftOrigin;
-(BOOL)isDiddlySquat;
-(id)dataForPropagation;
-(CGRect)cropRectForBottomLeftOrigin;
-(CGImageRef)staticRepresentation;
-(void)setStaticRepresentationData:(NSData *)arg1 ;
-(NSString *)scopeDescription;
-(NSDate *)softExpirationDate;
-(void)setSoftExpirationDate:(NSDate *)arg1 ;
-(NSDate *)insertionDate;
-(void)setInsertionDate:(NSDate *)arg1 ;
@end

