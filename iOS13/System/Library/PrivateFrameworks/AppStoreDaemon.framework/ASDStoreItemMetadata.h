/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)requiredDeviceCapabilities;
-(NSDictionary *)propertiesDictionary;
-(long long)storeItemIdentifier;
-(id)cancelDownloadURL;
-(id)storeTransationID;
@end

