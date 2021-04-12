/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSSUsageApp : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	unsigned long long _staticSize;
	unsigned long long _dynamicSize;
	unsigned long long _sharedSize;
	unsigned long long _dataSize;
	unsigned long long _totalSize;

}

@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                     //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic) unsigned long long staticSize;                //@synthesize staticSize=_staticSize - In the implementation block
@property (assign,nonatomic) unsigned long long dynamicSize;               //@synthesize dynamicSize=_dynamicSize - In the implementation block
@property (assign,nonatomic) unsigned long long dataSize;                  //@synthesize dataSize=_dataSize - In the implementation block
@property (assign,nonatomic) unsigned long long totalSize;                 //@synthesize totalSize=_totalSize - In the implementation block
@property (nonatomic,readonly) unsigned long long sharedSize;              //@synthesize sharedSize=_sharedSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)bundleVersion;
-(NSString *)name;
-(unsigned long long)dataSize;
-(id)description;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)totalSize;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setDataSize:(unsigned long long)arg1 ;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(unsigned long long)dynamicSize;
-(unsigned long long)staticSize;
-(void)setStaticSize:(unsigned long long)arg1 ;
-(void)setDynamicSize:(unsigned long long)arg1 ;
-(unsigned long long)sharedSize;
@end

