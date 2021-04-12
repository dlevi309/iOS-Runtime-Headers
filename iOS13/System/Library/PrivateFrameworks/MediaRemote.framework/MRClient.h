/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, MRColorComponents, NSArray, _MRNowPlayingClientProtobuf, NSData;

@interface MRClient : NSObject {

	int _processIdentifier;
	int _processUserIdentifier;
	NSString* _bundleIdentifier;
	NSString* _parentApplicationBundleIdentifier;
	long long _visibility;
	MRColorComponents* _tintColor;
	NSString* _displayName;
	NSArray* _bundleIdentifierHierarchy;

}

@property (nonatomic,readonly) _MRNowPlayingClientProtobuf * protobuf; 
@property (assign,nonatomic) int processIdentifier;                                   //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * parentApplicationBundleIdentifier;              //@synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) int processUserIdentifier;                               //@synthesize processUserIdentifier=_processUserIdentifier - In the implementation block
@property (assign,nonatomic) long long visibility;                                    //@synthesize visibility=_visibility - In the implementation block
@property (nonatomic,retain) MRColorComponents * tintColor;                           //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSArray * bundleIdentifierHierarchy;                       //@synthesize bundleIdentifierHierarchy=_bundleIdentifierHierarchy - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceholder; 
@property (nonatomic,readonly) BOOL hasAuxiliaryProperties; 
@property (nonatomic,readonly) NSData * data; 
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
+(id)localClient;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(int)processIdentifier;
-(NSString *)bundleIdentifier;
-(void)setVisibility:(long long)arg1 ;
-(long long)visibility;
-(NSString *)displayName;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(MRColorComponents *)tintColor;
-(void)setTintColor:(MRColorComponents *)arg1 ;
-(BOOL)isLocal;
-(void)setProcessIdentifier:(int)arg1 ;
-(_MRNowPlayingClientProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)hasPlaceholder;
-(void)setParentApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setProcessUserIdentifier:(int)arg1 ;
-(NSString *)parentApplicationBundleIdentifier;
-(int)processUserIdentifier;
-(id)initWithProcessIdentifier:(int)arg1 bundleIdentifier:(id)arg2 ;
-(NSArray *)bundleIdentifierHierarchy;
-(BOOL)hasAuxiliaryProperties;
-(void)setBundleIdentifierHierarchy:(NSArray *)arg1 ;
@end

