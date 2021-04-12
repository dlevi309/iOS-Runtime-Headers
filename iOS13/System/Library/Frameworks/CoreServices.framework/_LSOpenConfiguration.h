/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSURL, BSServiceConnectionEndpoint;

@interface _LSOpenConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _ignoreAppLinkEnabledProperty;
	BOOL _sensitive;
	BOOL _allowURLOverrides;
	NSDictionary* _frontBoardOptions;
	NSURL* _referrerURL;
	BSServiceConnectionEndpoint* _targetConnectionEndpoint;

}

@property (nonatomic,copy) NSDictionary * frontBoardOptions;                                      //@synthesize frontBoardOptions=_frontBoardOptions - In the implementation block
@property (assign,nonatomic) BOOL ignoreOpenStrategy; 
@property (assign,nonatomic) BOOL ignoreAppLinkEnabledProperty;                                   //@synthesize ignoreAppLinkEnabledProperty=_ignoreAppLinkEnabledProperty - In the implementation block
@property (nonatomic,copy) NSURL * referrerURL;                                                   //@synthesize referrerURL=_referrerURL - In the implementation block
@property (assign,getter=isSensitive,nonatomic) BOOL sensitive;                                   //@synthesize sensitive=_sensitive - In the implementation block
@property (assign,nonatomic) BOOL allowURLOverrides;                                              //@synthesize allowURLOverrides=_allowURLOverrides - In the implementation block
@property (nonatomic,retain) BSServiceConnectionEndpoint * targetConnectionEndpoint;              //@synthesize targetConnectionEndpoint=_targetConnectionEndpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)referrerURL;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(NSDictionary *)frontBoardOptions;
-(BOOL)isSensitive;
-(BOOL)allowURLOverrides;
-(BSServiceConnectionEndpoint *)targetConnectionEndpoint;
-(BOOL)ignoreAppLinkEnabledProperty;
-(void)setIgnoreAppLinkEnabledProperty:(BOOL)arg1 ;
-(BOOL)ignoreOpenStrategy;
-(void)setIgnoreOpenStrategy:(BOOL)arg1 ;
-(void)setFrontBoardOptions:(NSDictionary *)arg1 ;
-(void)setSensitive:(BOOL)arg1 ;
-(void)setAllowURLOverrides:(BOOL)arg1 ;
-(void)setTargetConnectionEndpoint:(BSServiceConnectionEndpoint *)arg1 ;
@end

