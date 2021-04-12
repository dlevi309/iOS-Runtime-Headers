/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ICJSSignConfiguration : NSObject <NSCopying> {

	NSMutableArray* _componentNames;
	NSMutableArray* _components;
	NSString* _signatureDataCookieName;
	NSString* _signatureDataHeaderName;

}

@property (nonatomic,copy) NSString * signatureDataCookieName;              //@synthesize signatureDataCookieName=_signatureDataCookieName - In the implementation block
@property (nonatomic,copy) NSString * signatureDataHeaderName;              //@synthesize signatureDataHeaderName=_signatureDataHeaderName - In the implementation block
+(id)storePlatformConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_enumerateComponentsUsingBlock:(/*^block*/id)arg1 ;
-(void)includeCookieWithName:(id)arg1 ;
-(void)includeHeaderWithName:(id)arg1 ;
-(void)includeQueryItemWithName:(id)arg1 ;
-(void)setSignatureDataCookieName:(NSString *)arg1 ;
-(void)_addRequestComponent:(long long)arg1 withName:(id)arg2 ;
-(NSString *)signatureDataCookieName;
-(NSString *)signatureDataHeaderName;
-(void)setSignatureDataHeaderName:(NSString *)arg1 ;
@end

