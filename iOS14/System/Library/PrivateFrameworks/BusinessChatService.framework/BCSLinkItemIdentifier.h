/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSItemIdentifying.h>

@class NSURL, NSString, NSObject;

@interface BCSLinkItemIdentifier : NSObject <BCSItemIdentifying> {

	NSURL* _url;
	NSString* _fullHash;
	long long _computedTruncatedHash;

}

@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * fullHash;                          //@synthesize fullHash=_fullHash - In the implementation block
@property (assign,nonatomic) long long computedTruncatedHash;              //@synthesize computedTruncatedHash=_computedTruncatedHash - In the implementation block
@property (nonatomic,readonly) NSObject * itemIdentifier; 
@property (nonatomic,readonly) long long truncatedHash; 
@property (nonatomic,readonly) long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifierWithURL:(id)arg1 ;
+(id)identifierWithHash:(id)arg1 ;
+(id)identifierWithNormalizedURL:(id)arg1 ;
-(id)succinctDescription;
-(NSObject *)itemIdentifier;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(NSURL *)url;
-(NSString *)description;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)type;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSString *)fullHash;
-(long long)truncatedHash;
-(BOOL)matchesItemIdentifying:(id)arg1 ;
-(id)_initWithNormalizedURL:(id)arg1 ;
-(id)_initWithHash:(id)arg1 ;
-(id)_fullHashForNormalizedURL:(id)arg1 ;
-(long long)_truncatedHashForNormalizedURL:(id)arg1 ;
-(long long)_truncatedHashForHash:(id)arg1 ;
-(long long)computedTruncatedHash;
-(void)setFullHash:(NSString *)arg1 ;
-(void)setComputedTruncatedHash:(long long)arg1 ;
@end

