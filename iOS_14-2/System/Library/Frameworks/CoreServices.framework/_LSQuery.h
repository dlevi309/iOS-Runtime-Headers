/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _LSQuery : NSObject <NSSecureCoding, NSCopying> {

	BOOL _legacy;

}

@property (assign,getter=isLegacy,nonatomic) BOOL legacy;              //@synthesize legacy=_legacy - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLegacy:(BOOL)arg1 ;
-(BOOL)_canResolveLocallyWithoutMappingDatabase;
-(id)init;
-(BOOL)isLegacy;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

