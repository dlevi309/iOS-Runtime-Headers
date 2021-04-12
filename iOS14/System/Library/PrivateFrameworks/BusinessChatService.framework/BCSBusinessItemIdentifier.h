/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSItemIdentifying.h>

@class NSObject, NSString;

@interface BCSBusinessItemIdentifier : NSObject <BCSItemIdentifying> {

	long long _computedTruncatedHash;

}

@property (assign,nonatomic) long long computedTruncatedHash;              //@synthesize computedTruncatedHash=_computedTruncatedHash - In the implementation block
@property (nonatomic,readonly) NSObject * itemIdentifier; 
@property (nonatomic,readonly) long long truncatedHash; 
@property (nonatomic,readonly) long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifierWithPhoneNumber:(id)arg1 ;
+(id)identifierWithBusinessItem:(id)arg1 ;
-(id)succinctDescription;
-(NSObject *)itemIdentifier;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(long long)type;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(long long)truncatedHash;
-(BOOL)matchesItemIdentifying:(id)arg1 ;
-(long long)computedTruncatedHash;
-(void)setComputedTruncatedHash:(long long)arg1 ;
-(id)_initWithPhoneNumber:(id)arg1 ;
-(id)_initWithBusinessItem:(id)arg1 ;
-(long long)_truncatedHashForPhoneNumber:(id)arg1 ;
@end

