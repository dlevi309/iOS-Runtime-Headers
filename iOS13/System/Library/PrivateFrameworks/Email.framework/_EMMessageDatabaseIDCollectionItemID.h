/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMMessageCollectionItemID.h>
#import <libobjc.A.dylib/EFCacheable.h>

@class NSString;

@interface _EMMessageDatabaseIDCollectionItemID : EMMessageCollectionItemID <EFCacheable> {

	long long _databaseID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long databaseID;                //@synthesize databaseID=_databaseID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)databaseID;
-(id)initWithMessageDatabaseID:(long long)arg1 ;
-(id)cachedSelf;
@end

