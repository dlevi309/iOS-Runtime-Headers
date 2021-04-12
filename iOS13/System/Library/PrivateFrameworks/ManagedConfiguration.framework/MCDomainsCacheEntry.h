/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)domain;
-(NSNumber *)port;
-(NSString *)path;
-(void)setPort:(NSNumber *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)matchesURL:(id)arg1 ;
-(id)initWithPattern:(id)arg1 ;
-(BOOL)subdomainsMatch;
-(void)setSubdomainsMatch:(BOOL)arg1 ;
@end

