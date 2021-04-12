/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithNativeControllerName:(id)arg1 webControllerName:(id)arg2 bridgeVersion:(id)arg3 ;
-(NSString *)nativeControllerName;
-(NSString *)webControllerName;
-(NSString *)bridgeVersion;
@end

