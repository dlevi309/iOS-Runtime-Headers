/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface ASDStoreItemMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _propertiesDictionary;

}

@property (nonatomic,readonly) NSDictionary * propertiesDictionary;              //@synthesize propertiesDictionary=_propertiesDictionary - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)cancelDownloadURL;
-(NSDictionary *)propertiesDictionary;
-(id)initWithDictionary:(id)arg1 ;
-(long long)storeItemIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)requiredDeviceCapabilities;
-(id)storeTransationID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

