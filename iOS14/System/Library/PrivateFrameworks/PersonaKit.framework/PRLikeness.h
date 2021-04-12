/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_dateFormatter;
+(BOOL)supportsSecureCoding;
+(id)diddlySquatLikeness;
+(id)photoWithScope:(unsigned long long)arg1 image:(CGImageRef)arg2 ;
+(id)monogramWithScope:(unsigned long long)arg1 recipe:(id)arg2 staticRepresentation:(CGImageRef)arg3 ;
+(unsigned long long)scopeFromDescription:(id)arg1 ;
+(CGRect)_flippedRectForRect:(CGRect)arg1 relativeToImage:(CGImageRef)arg2 ;
+(id)photoWithImage:(CGImageRef)arg1 cropRectForBottomLeftOrigin:(CGRect)arg2 ;
+(id)likenessWithPropagatedData:(id)arg1 ;
+(id)_photoWithScope:(unsigned long long)arg1 image:(CGImageRef)arg2 cropRectForTopLeftOrigin:(CGRect)arg3 ;
+(id)photoWithImage:(CGImageRef)arg1 cropRect:(CGRect)arg2 ;
+(id)monogramWithRecipe:(id)arg1 staticRepresentation:(CGImageRef)arg2 ;
+(id)photoWithImage:(CGImageRef)arg1 cropRectForTopLeftOrigin:(CGRect)arg2 ;
+(id)descriptionForScope:(unsigned long long)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfCropRectForTopLeftOrigin;
+(id)photoWithImage:(CGImageRef)arg1 ;
-(id)accentColor;
-(id)snapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(id)_accentColorForMonogram;
-(id)_accentColorForPhoto;
-(id)_photoSnapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(CGRect)cropRect;
-(void)setScope:(unsigned long long)arg1 ;
-(unsigned long long)scope;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(void)clearDirtyProperties;
-(NSData *)recipe;
-(void)setRecipe:(NSData *)arg1 ;
-(BOOL)isDirty;
-(id)init;
-(NSSet *)dirtyProperties;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSString *)externalIdentifier;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)ownerID;
-(void)setSource:(long long)arg1 ;
-(void)setDirtyProperties:(NSSet *)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(id)description;
-(NSDate *)creationDate;
-(NSDate *)expirationDate;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setCurrent:(BOOL)arg1 ;
-(NSString *)typeDescription;
-(unsigned long long)version;
-(BOOL)isCurrent;
-(void)dealloc;
-(long long)source;
-(void)setOwnerID:(NSString *)arg1 ;
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

