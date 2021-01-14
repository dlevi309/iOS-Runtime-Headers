/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CHSLocalizableString : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isVerbatim;
	NSString* _key;
	NSString* _tableName;
	NSData* _bundleBookmark;

}

@property (nonatomic,copy,readonly) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableName;                 //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,copy,readonly) NSData * bundleBookmark;              //@synthesize bundleBookmark=_bundleBookmark - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundlePath; 
@property (nonatomic,readonly) BOOL isVerbatim;                           //@synthesize isVerbatim=_isVerbatim - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)tableName;
-(NSString *)bundlePath;
-(NSData *)bundleBookmark;
-(BOOL)isVerbatim;
-(id)_bookmarkForPath:(id)arg1 ;
-(id)_initWithKey:(id)arg1 tableName:(id)arg2 bundleBookmark:(id)arg3 isVerbatim:(BOOL)arg4 ;
-(id)_URLForBookmark:(id)arg1 isStale:(BOOL*)arg2 ;
-(id)initWithKey:(id)arg1 tableName:(id)arg2 bundlePath:(id)arg3 isVerbatim:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)localizedString;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

