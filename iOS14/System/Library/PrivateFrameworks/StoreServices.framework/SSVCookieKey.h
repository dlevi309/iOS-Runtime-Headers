/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface SSVCookieKey : NSObject <NSCopying> {

	NSNumber* _identifier;
	long long _scope;

}

@property (nonatomic,copy) NSNumber * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long scope;                  //@synthesize scope=_scope - In the implementation block
+(id)keyWithIdentifier:(id)arg1 scope:(long long)arg2 ;
-(void)setScope:(long long)arg1 ;
-(long long)scope;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

