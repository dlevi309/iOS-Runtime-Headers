/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _SFServiceIdentifier : NSObject <NSCopying, NSSecureCoding> {

	id _serviceIdentifierInternal;

}

@property (getter=_lookupKey,nonatomic,copy,readonly) NSString * lookupKey; 
@property (nonatomic,copy,readonly) NSString * serviceID; 
@property (nonatomic,readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(id)serviceIdentifierForDomain:(id)arg1 ;
+(id)serviceIdentifierForURL:(id)arg1 ;
+(id)serviceIdentifierForBundleID:(id)arg1 ;
+(id)serviceIdentifierForAccessGroup:(id)arg1 ;
+(id)serviceIdentifierForCustomString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)serviceID;
-(id)description;
-(id)_lookupKey;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithServiceID:(id)arg1 forType:(long long)arg2 ;
@end

