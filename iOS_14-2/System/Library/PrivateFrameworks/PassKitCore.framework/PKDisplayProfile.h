/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKDisplayProfile : NSObject <NSSecureCoding, NSCopying> {

	long long _type;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)displayProfileOfType:(long long)arg1 withDictionary:(id)arg2 bundle:(id)arg3 ;
+(Class)classForDisplayProfileType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
@end

