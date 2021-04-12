/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface GEOPOIEventPerformer : NSObject <NSSecureCoding> {

	NSString* _localizedName;
	NSString* _iTunesIdentifier;
	NSURL* _iTunesURL;

}

@property (nonatomic,retain) NSString * localizedName;                 //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * iTunesIdentifier;              //@synthesize iTunesIdentifier=_iTunesIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * iTunesURL;                        //@synthesize iTunesURL=_iTunesURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)poiEventPerformersForPerformers:(id)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)iTunesURL;
-(id)initWithPerformer:(id)arg1 ;
-(NSString *)iTunesIdentifier;
-(void)setITunesIdentifier:(NSString *)arg1 ;
-(void)setITunesURL:(NSURL *)arg1 ;
@end

