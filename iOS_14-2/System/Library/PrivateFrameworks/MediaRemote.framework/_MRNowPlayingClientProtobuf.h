/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, _MRColorProtobuf;

@interface _MRNowPlayingClientProtobuf : PBCodable <NSCopying> {

	NSString* _bundleIdentifier;
	NSString* _displayName;
	NSMutableArray* _extendedBundleIdentifierHierarchys;
	NSString* _iconURL;
	int _nowPlayingVisibility;
	NSString* _parentApplicationBundleIdentifier;
	int _processIdentifier;
	int _processUserIdentifier;
	_MRColorProtobuf* _tintColor;
	BOOL _isEmptyDeprecated;
	SCD_Struct_MR15 _has;

}

@property (assign,nonatomic) BOOL hasProcessIdentifier; 
@property (assign,nonatomic) int processIdentifier;                                            //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasParentApplicationBundleIdentifier; 
@property (nonatomic,retain) NSString * parentApplicationBundleIdentifier;                     //@synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasProcessUserIdentifier; 
@property (assign,nonatomic) int processUserIdentifier;                                        //@synthesize processUserIdentifier=_processUserIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasNowPlayingVisibility; 
@property (assign,nonatomic) int nowPlayingVisibility;                                         //@synthesize nowPlayingVisibility=_nowPlayingVisibility - In the implementation block
@property (nonatomic,readonly) BOOL hasTintColor; 
@property (nonatomic,retain) _MRColorProtobuf * tintColor;                                     //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSMutableArray * extendedBundleIdentifierHierarchys;              //@synthesize extendedBundleIdentifierHierarchys=_extendedBundleIdentifierHierarchys - In the implementation block
@property (assign,nonatomic) BOOL hasIsEmptyDeprecated; 
@property (assign,nonatomic) BOOL isEmptyDeprecated;                                           //@synthesize isEmptyDeprecated=_isEmptyDeprecated - In the implementation block
@property (nonatomic,readonly) BOOL hasIconURL; 
@property (nonatomic,retain) NSString * iconURL;                                               //@synthesize iconURL=_iconURL - In the implementation block
+(Class)extendedBundleIdentifierHierarchyType;
-(void)setIconURL:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasIsEmptyDeprecated;
-(void)setHasNowPlayingVisibility:(BOOL)arg1 ;
-(void)setTintColor:(_MRColorProtobuf *)arg1 ;
-(int)processIdentifier;
-(void)setParentApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(void)setHasProcessIdentifier:(BOOL)arg1 ;
-(void)setNowPlayingVisibility:(int)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setIsEmptyDeprecated:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEmptyDeprecated;
-(BOOL)hasProcessUserIdentifier;
-(void)setHasIsEmptyDeprecated:(BOOL)arg1 ;
-(NSString *)parentApplicationBundleIdentifier;
-(BOOL)hasTintColor;
-(id)description;
-(BOOL)hasProcessIdentifier;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)extendedBundleIdentifierHierarchysCount;
-(BOOL)hasIconURL;
-(void)setProcessUserIdentifier:(int)arg1 ;
-(int)StringAsNowPlayingVisibility:(id)arg1 ;
-(int)processUserIdentifier;
-(unsigned long long)hash;
-(id)nowPlayingVisibilityAsString:(int)arg1 ;
-(void)setExtendedBundleIdentifierHierarchys:(NSMutableArray *)arg1 ;
-(void)clearExtendedBundleIdentifierHierarchys;
-(void)setHasProcessUserIdentifier:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasNowPlayingVisibility;
-(NSString *)iconURL;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addExtendedBundleIdentifierHierarchy:(id)arg1 ;
-(NSMutableArray *)extendedBundleIdentifierHierarchys;
-(BOOL)hasBundleIdentifier;
-(int)nowPlayingVisibility;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(_MRColorProtobuf *)tintColor;
-(id)extendedBundleIdentifierHierarchyAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
-(BOOL)hasParentApplicationBundleIdentifier;
@end

