/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface VUIStoreAcquisitionProperties : NSObject <NSCopying> {

	BOOL _ignoresForcedPasswordRestriction;
	NSString* _buyParams;
	NSString* _urlBagKey;
	NSString* _userAgent;
	NSNumber* _dsid;
	NSString* _strongToken;

}

@property (nonatomic,copy) NSString * buyParams;                                 //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,copy) NSString * urlBagKey;                                 //@synthesize urlBagKey=_urlBagKey - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                                 //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,copy) NSNumber * dsid;                                      //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * strongToken;                               //@synthesize strongToken=_strongToken - In the implementation block
@property (assign,nonatomic) BOOL ignoresForcedPasswordRestriction;              //@synthesize ignoresForcedPasswordRestriction=_ignoresForcedPasswordRestriction - In the implementation block
+(id)metricsAugumentedBuyParamsWithBuyParams:(id)arg1 ;
+(id)acquisitionPropertiesWithBuyParams:(id)arg1 urlbagKey:(id)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setIgnoresForcedPasswordRestriction:(BOOL)arg1 ;
-(BOOL)ignoresForcedPasswordRestriction;
-(NSString *)urlBagKey;
-(void)setUrlBagKey:(NSString *)arg1 ;
-(void)setStrongToken:(NSString *)arg1 ;
-(NSString *)strongToken;
@end

