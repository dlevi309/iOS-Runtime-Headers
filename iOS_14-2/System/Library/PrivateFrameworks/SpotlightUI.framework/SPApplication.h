/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray, NSURL;

@interface SPApplication : NSObject <NSSecureCoding> {

	NSString* _longDisplayName;
	NSString* _displayIdentifier;
	NSMutableArray* _keywords;
	NSURL* _URL;
	NSString* _shortVersion;
	NSString* _appBundleIdentifier;
	long long _webClipType;
	NSString* _subtitle;
	NSString* _displayNameInternal;

}

@property (retain) NSString * displayNameInternal;                        //@synthesize displayNameInternal=_displayNameInternal - In the implementation block
@property (nonatomic,retain) NSString * displayIdentifier;                //@synthesize displayIdentifier=_displayIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * longDisplayName; 
@property (nonatomic,retain) NSMutableArray * keywords;                   //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                 //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSString * shortVersion;                     //@synthesize shortVersion=_shortVersion - In the implementation block
@property (nonatomic,readonly) BOOL displayNameLoaded; 
@property (nonatomic,retain) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (assign,nonatomic) long long webClipType;                       //@synthesize webClipType=_webClipType - In the implementation block
@property (readonly) BOOL isWebClip; 
@property (readonly) BOOL isAppClip; 
@property (readonly) NSString * utiType; 
@property (nonatomic,retain) NSString * subtitle;                         //@synthesize subtitle=_subtitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isAppClip;
-(void)setKeywords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)keywords;
-(void)setURL:(NSURL *)arg1 ;
-(void)setShortVersion:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(NSString *)shortVersion;
-(NSString *)utiType;
-(id)description;
-(BOOL)isWebClip;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayNameInternal;
-(void)setDisplayNameInternal:(NSString *)arg1 ;
-(BOOL)displayNameLoaded;
-(NSString *)longDisplayName;
-(void)setLongDisplayName:(NSString *)arg1 ;
-(void)setDisplayIdentifier:(NSString *)arg1 ;
-(long long)webClipType;
-(void)setWebClipType:(long long)arg1 ;
-(void)copySearchFoundationResult:(id)arg1 ;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)displayIdentifier;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
@end

