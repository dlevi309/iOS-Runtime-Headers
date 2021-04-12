/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_lookupKey;
-(NSString *)serviceID;
-(id)initWithServiceID:(id)arg1 forType:(long long)arg2 ;
@end

