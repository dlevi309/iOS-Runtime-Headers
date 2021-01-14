/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MKWebBridgeConfiguration : NSObject <NSCopying> {

	NSString* _bridgeVersion;
	NSString* _nativeControllerName;
	NSString* _webControllerName;

}

@property (nonatomic,copy,readonly) NSString * bridgeVersion;                     //@synthesize bridgeVersion=_bridgeVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * nativeControllerName;              //@synthesize nativeControllerName=_nativeControllerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * webControllerName;                 //@synthesize webControllerName=_webControllerName - In the implementation block
-(NSString *)nativeControllerName;
-(NSString *)webControllerName;
-(NSString *)bridgeVersion;
-(unsigned long long)hash;
-(id)initWithNativeControllerName:(id)arg1 webControllerName:(id)arg2 bridgeVersion:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

