/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isSensitive;
-(NSDictionary *)frontBoardOptions;
-(BOOL)allowURLOverrides;
-(BSServiceConnectionEndpoint *)targetConnectionEndpoint;
-(void)setSensitive:(BOOL)arg1 ;
-(void)setIgnoreAppLinkEnabledProperty:(BOOL)arg1 ;
-(void)setFrontBoardOptions:(NSDictionary *)arg1 ;
-(void)setAllowURLOverrides:(BOOL)arg1 ;
-(BOOL)ignoreAppLinkEnabledProperty;
-(BOOL)ignoreOpenStrategy;
-(void)setTargetConnectionEndpoint:(BSServiceConnectionEndpoint *)arg1 ;
-(void)setIgnoreOpenStrategy:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)referrerURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReferrerURL:(NSURL *)arg1 ;
@end

