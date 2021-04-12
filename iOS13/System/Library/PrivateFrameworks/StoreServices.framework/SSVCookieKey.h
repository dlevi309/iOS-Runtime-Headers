/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)identifier;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(long long)scope;
-(void)setScope:(long long)arg1 ;
@end

