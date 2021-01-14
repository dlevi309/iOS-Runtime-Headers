/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSMutableDictionary, NSString;

@interface MTIDConfig : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _userIdNamespacesByTopic;
	NSMutableDictionary* _clientIdNamespacesByTopic;
	NSString* _defaultUserIdNamespace;
	NSString* _defaultClientIdNamespace;

}

@property (nonatomic,retain) NSMutableDictionary * cache;                                  //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userIdNamespacesByTopic;                //@synthesize userIdNamespacesByTopic=_userIdNamespacesByTopic - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clientIdNamespacesByTopic;              //@synthesize clientIdNamespacesByTopic=_clientIdNamespacesByTopic - In the implementation block
@property (nonatomic,retain) NSString * defaultUserIdNamespace;                            //@synthesize defaultUserIdNamespace=_defaultUserIdNamespace - In the implementation block
@property (nonatomic,retain) NSString * defaultClientIdNamespace;                          //@synthesize defaultClientIdNamespace=_defaultClientIdNamespace - In the implementation block
-(id)dictionaryRepresentation;
-(NSMutableDictionary *)cache;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)namespaceForTopic:(id)arg1 idType:(long long)arg2 ;
-(id)schemeForNamespace:(id)arg1 ;
-(id)allKnownSchemes;
-(void)setUserIdNamespacesByTopic:(NSMutableDictionary *)arg1 ;
-(void)setClientIdNamespacesByTopic:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)userIdNamespacesByTopic;
-(NSMutableDictionary *)clientIdNamespacesByTopic;
-(NSString *)defaultUserIdNamespace;
-(void)setDefaultUserIdNamespace:(NSString *)arg1 ;
-(NSString *)defaultClientIdNamespace;
-(void)setDefaultClientIdNamespace:(NSString *)arg1 ;
-(unsigned long long)calculateCombinedHashForNamespaces:(id)arg1 ;
@end

