/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MRColorComponents, NSString, NSURL, NSArray, _MRNowPlayingClientProtobuf, NSData;

@interface MRClient : NSObject <NSCopying> {

	int _processIdentifier;
	int _processUserIdentifier;
	long long _visibility;
	MRColorComponents* _tintColor;
	NSString* _bundleIdentifier;
	NSString* _parentApplicationBundleIdentifier;
	NSString* _displayName;
	NSURL* _appIcon;
	NSArray* _extendedBundleIdentifierHierarchy;

}

@property (nonatomic,readonly) _MRNowPlayingClientProtobuf * protobuf; 
@property (assign,nonatomic) int processIdentifier;                                                            //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (assign,nonatomic) int processUserIdentifier;                                                        //@synthesize processUserIdentifier=_processUserIdentifier - In the implementation block
@property (assign,nonatomic) long long visibility;                                                             //@synthesize visibility=_visibility - In the implementation block
@property (nonatomic,copy) MRColorComponents * tintColor;                                                      //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * parentApplicationBundleIdentifier;                                       //@synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSArray * extendedBundleIdentifierHierarchy;                                        //@synthesize extendedBundleIdentifierHierarchy=_extendedBundleIdentifierHierarchy - In the implementation block
@property (nonatomic,copy) NSURL * appIcon;                                                                    //@synthesize appIcon=_appIcon - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceholder; 
@property (nonatomic,readonly) BOOL hasAuxiliaryProperties; 
@property (getter=isSystemMediaApplication,nonatomic,readonly) BOOL systemMediaApplication; 
@property (getter=isSystemPodcastsApplication,nonatomic,readonly) BOOL systemPodcastsApplication; 
@property (nonatomic,readonly) MRClient * skeleton; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSArray * bundleIdentifierHierarchy; 
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
+(id)localClient;
+(id)anyClient;
-(BOOL)isLocal;
-(MRClient *)skeleton;
-(NSArray *)extendedBundleIdentifierHierarchy;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setTintColor:(MRColorComponents *)arg1 ;
-(long long)visibility;
-(BOOL)hasPlaceholder;
-(int)processIdentifier;
-(void)setParentApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(BOOL)hasAuxiliaryProperties;
-(NSString *)bundleIdentifier;
-(BOOL)isSystemPodcastsApplication;
-(void)setVisibility:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setAppIcon:(NSURL *)arg1 ;
-(NSString *)parentApplicationBundleIdentifier;
-(void)setExtendedBundleIdentifierHierarchy:(NSArray *)arg1 ;
-(NSArray *)bundleIdentifierHierarchy;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSData *)data;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(_MRNowPlayingClientProtobuf *)protobuf;
-(void)setProcessUserIdentifier:(int)arg1 ;
-(int)processUserIdentifier;
-(id)initWithProtobuf:(id)arg1 ;
-(void)resolvePlaceholdersForDeviceInfo:(id)arg1 ;
-(NSURL *)appIcon;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isSystemMediaApplication;
-(MRColorComponents *)tintColor;
-(id)initWithProcessIdentifier:(int)arg1 bundleIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

