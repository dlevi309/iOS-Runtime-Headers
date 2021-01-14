/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EMCollectionItemID.h>

@class NSString;

@interface EMMessageCollectionItemID : NSObject <EFCacheable, EMCollectionItemID> {

	long long _globalMessageID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long globalMessageID;              //@synthesize globalMessageID=_globalMessageID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(long long)globalMessageID;
-(id)initWithGlobalMessageID:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)cachedSelf;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

