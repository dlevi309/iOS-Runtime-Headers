/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)changeTokenForDestination:(long long)arg1 ;
-(id)initWithChangeTokensByDestinationKey:(id)arg1 ;
-(NSDictionary *)changeTokensByDestinationKey;
-(id)initWithChangeTokensByDestination:(id)arg1 ;
-(void)setChangeTokensByDestinationKey:(NSDictionary *)arg1 ;
@end

