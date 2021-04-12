/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INCodableLocalizationTable : NSObject <NSSecureCoding, NSCopying> {

	NSString* _bundleIdentifier;
	NSString* _tableName;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * tableName;                     //@synthesize tableName=_tableName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)tableName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 tableName:(id)arg2 ;
-(void)setTableName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

