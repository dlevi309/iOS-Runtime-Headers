/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray, NSURL;

@interface SPApplication : NSObject <NSSecureCoding> {

	NSString* _longDisplayName;
	BOOL _isWebClip;
	NSString* _displayIdentifier;
	NSMutableArray* _keywords;
	NSURL* _URL;
	NSString* _shortVersion;
	NSString* _displayNameInternal;

}

@property (retain) NSString * displayNameInternal;                      //@synthesize displayNameInternal=_displayNameInternal - In the implementation block
@property (nonatomic,retain) NSString * displayIdentifier;              //@synthesize displayIdentifier=_displayIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * longDisplayName; 
@property (nonatomic,retain) NSMutableArray * keywords;                 //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,retain) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSString * shortVersion;                   //@synthesize shortVersion=_shortVersion - In the implementation block
@property (assign,nonatomic) BOOL isWebClip;                            //@synthesize isWebClip=_isWebClip - In the implementation block
@property (nonatomic,readonly) BOOL displayNameLoaded; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSMutableArray *)keywords;
-(void)setKeywords:(NSMutableArray *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayIdentifier;
-(NSString *)shortVersion;
-(void)setShortVersion:(NSString *)arg1 ;
-(NSString *)displayNameInternal;
-(void)setDisplayNameInternal:(NSString *)arg1 ;
-(BOOL)displayNameLoaded;
-(void)setLongDisplayName:(NSString *)arg1 ;
-(NSString *)longDisplayName;
-(void)setDisplayIdentifier:(NSString *)arg1 ;
-(BOOL)isWebClip;
-(void)setIsWebClip:(BOOL)arg1 ;
-(void)copySearchFoundationResult:(id)arg1 ;
@end

