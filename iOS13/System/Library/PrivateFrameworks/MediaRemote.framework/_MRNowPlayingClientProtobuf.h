/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, _MRColorProtobuf;

@interface _MRNowPlayingClientProtobuf : PBCodable <NSCopying> {

	NSString* _bundleIdentifier;
	NSMutableArray* _bundleIdentifierHierarchys;
	NSString* _displayName;
	int _nowPlayingVisibility;
	NSString* _parentApplicationBundleIdentifier;
	int _processIdentifier;
	int _processUserIdentifier;
	_MRColorProtobuf* _tintColor;
	BOOL _isEmptyDeprecated;
	SCD_Struct_MR15 _has;

}

@property (assign,nonatomic) BOOL hasProcessIdentifier; 
@property (assign,nonatomic) int processIdentifier;                                     //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasParentApplicationBundleIdentifier; 
@property (nonatomic,retain) NSString * parentApplicationBundleIdentifier;              //@synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasProcessUserIdentifier; 
@property (assign,nonatomic) int processUserIdentifier;                                 //@synthesize processUserIdentifier=_processUserIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasNowPlayingVisibility; 
@property (assign,nonatomic) int nowPlayingVisibility;                                  //@synthesize nowPlayingVisibility=_nowPlayingVisibility - In the implementation block
@property (nonatomic,readonly) BOOL hasTintColor; 
@property (nonatomic,retain) _MRColorProtobuf * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSMutableArray * bundleIdentifierHierarchys;               //@synthesize bundleIdentifierHierarchys=_bundleIdentifierHierarchys - In the implementation block
@property (assign,nonatomic) BOOL hasIsEmptyDeprecated; 
@property (assign,nonatomic) BOOL isEmptyDeprecated;                                    //@synthesize isEmptyDeprecated=_isEmptyDeprecated - In the implementation block
+(Class)bundleIdentifierHierarchyType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)processIdentifier;
-(NSString *)bundleIdentifier;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(_MRColorProtobuf *)tintColor;
-(void)setTintColor:(_MRColorProtobuf *)arg1 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(BOOL)hasDisplayName;
-(BOOL)hasBundleIdentifier;
-(BOOL)hasProcessIdentifier;
-(void)addBundleIdentifierHierarchy:(id)arg1 ;
-(void)setParentApplicationBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)bundleIdentifierHierarchysCount;
-(void)clearBundleIdentifierHierarchys;
-(id)bundleIdentifierHierarchyAtIndex:(unsigned long long)arg1 ;
-(void)setHasProcessIdentifier:(BOOL)arg1 ;
-(BOOL)hasParentApplicationBundleIdentifier;
-(void)setProcessUserIdentifier:(int)arg1 ;
-(void)setHasProcessUserIdentifier:(BOOL)arg1 ;
-(BOOL)hasProcessUserIdentifier;
-(int)nowPlayingVisibility;
-(void)setNowPlayingVisibility:(int)arg1 ;
-(void)setHasNowPlayingVisibility:(BOOL)arg1 ;
-(BOOL)hasNowPlayingVisibility;
-(id)nowPlayingVisibilityAsString:(int)arg1 ;
-(int)StringAsNowPlayingVisibility:(id)arg1 ;
-(BOOL)hasTintColor;
-(void)setIsEmptyDeprecated:(BOOL)arg1 ;
-(void)setHasIsEmptyDeprecated:(BOOL)arg1 ;
-(BOOL)hasIsEmptyDeprecated;
-(NSString *)parentApplicationBundleIdentifier;
-(int)processUserIdentifier;
-(NSMutableArray *)bundleIdentifierHierarchys;
-(void)setBundleIdentifierHierarchys:(NSMutableArray *)arg1 ;
-(BOOL)isEmptyDeprecated;
@end

