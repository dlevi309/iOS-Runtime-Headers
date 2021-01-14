/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsCore/TPSSerializableObject.h>

@class NSString;

@interface TPSInstalledAppInfo : TPSSerializableObject {

	NSString* _bundleID;
	NSString* _minVersion;
	NSString* _maxVersion;

}

@property (nonatomic,copy) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * minVersion;              //@synthesize minVersion=_minVersion - In the implementation block
@property (nonatomic,copy) NSString * maxVersion;              //@synthesize maxVersion=_maxVersion - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(id)debugDescription;
-(void)setMaxVersion:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleID;
-(NSString *)minVersion;
-(void)setMinVersion:(NSString *)arg1 ;
-(NSString *)maxVersion;
@end

