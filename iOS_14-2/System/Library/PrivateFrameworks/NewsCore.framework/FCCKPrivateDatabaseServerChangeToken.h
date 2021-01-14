/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface FCCKPrivateDatabaseServerChangeToken : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _changeTokensByDestinationKey;

}

@property (nonatomic,copy) NSDictionary * changeTokensByDestinationKey;              //@synthesize changeTokensByDestinationKey=_changeTokensByDestinationKey - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tokenByAddingCKToken:(id)arg1 forDestination:(long long)arg2 toToken:(id)arg3 ;
+(id)_keyForDestination:(long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)changeTokenForDestination:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithChangeTokensByDestinationKey:(id)arg1 ;
-(NSDictionary *)changeTokensByDestinationKey;
-(id)initWithChangeTokensByDestination:(id)arg1 ;
-(void)setChangeTokensByDestinationKey:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

