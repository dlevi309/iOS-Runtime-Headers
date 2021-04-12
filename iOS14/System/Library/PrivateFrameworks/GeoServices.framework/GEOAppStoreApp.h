/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSArray;

@interface GEOAppStoreApp : NSObject <NSSecureCoding> {

	int _ratingsCount;
	float _ratingsValue;
	NSString* _identifier;
	NSString* _displayName;
	NSURL* _appStoreURL;
	NSString* _subtitle;
	NSString* _iOSBundleIdentifier;
	NSURL* _artworkURL;
	NSArray* _transitModes;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSURL * appStoreURL;                       //@synthesize appStoreURL=_appStoreURL - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                         //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * iOSBundleIdentifier;              //@synthesize iOSBundleIdentifier=_iOSBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * artworkURL;                        //@synthesize artworkURL=_artworkURL - In the implementation block
@property (assign,nonatomic) int ratingsCount;                          //@synthesize ratingsCount=_ratingsCount - In the implementation block
@property (assign,nonatomic) float ratingsValue;                        //@synthesize ratingsValue=_ratingsValue - In the implementation block
@property (nonatomic,readonly) NSArray * transitModes;                  //@synthesize transitModes=_transitModes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(NSURL *)artworkURL;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 appStoreURL:(id)arg3 subtitle:(id)arg4 iOSBundleIdentifier:(id)arg5 artworkURL:(id)arg6 ratingsCount:(int)arg7 ratingsValue:(float)arg8 transitModes:(id)arg9 ;
-(int)ratingsCount;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSURL *)appStoreURL;
-(NSString *)iOSBundleIdentifier;
-(float)ratingsValue;
-(NSArray *)transitModes;
-(void)setIOSBundleIdentifier:(NSString *)arg1 ;
-(void)setRatingsValue:(float)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 artworkSize:(CGSize)arg2 screenScale:(double)arg3 ;
-(BOOL)isAppInstalled;
-(void)setAppStoreURL:(NSURL *)arg1 ;
-(void)setRatingsCount:(int)arg1 ;
-(NSString *)displayName;
@end

