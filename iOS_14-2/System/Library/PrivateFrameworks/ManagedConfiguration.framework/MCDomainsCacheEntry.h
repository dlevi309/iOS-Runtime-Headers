/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@class NSString, NSNumber;

@interface MCDomainsCacheEntry : NSObject {

	BOOL _subdomainsMatch;
	NSString* _domain;
	NSString* _path;
	NSNumber* _port;

}

@property (assign,nonatomic) BOOL subdomainsMatch;              //@synthesize subdomainsMatch=_subdomainsMatch - In the implementation block
@property (nonatomic,retain) NSString * domain;                 //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * path;                   //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSNumber * port;                   //@synthesize port=_port - In the implementation block
+(id)normalizedPatternString:(id)arg1 ;
-(void)setPort:(NSNumber *)arg1 ;
-(NSNumber *)port;
-(BOOL)matchesURL:(id)arg1 ;
-(id)initWithPattern:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(id)description;
-(BOOL)subdomainsMatch;
-(void)setSubdomainsMatch:(BOOL)arg1 ;
@end

