/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AMSSQLiteConnectionOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _readOnly;
	NSString* _databasePath;
	long long _cacheSize;
	NSString* _protectionType;

}

@property (nonatomic,copy) NSString * databasePath;                        //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic) long long cacheSize;                          //@synthesize cacheSize=_cacheSize - In the implementation block
@property (nonatomic,copy) NSString * protectionType;                      //@synthesize protectionType=_protectionType - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;              //@synthesize readOnly=_readOnly - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)databasePath;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(long long)cacheSize;
-(NSString *)protectionType;
-(void)setProtectionType:(NSString *)arg1 ;
-(void)setCacheSize:(long long)arg1 ;
-(id)initWithDatabasePath:(id)arg1 ;
-(void)setCacheSizeWithNumberOfKilobytes:(long long)arg1 ;
-(void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1 ;
-(int)applyToDatabase:(sqlite3Ref)arg1 ;
-(void)setDatabasePath:(NSString *)arg1 ;
@end

