/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <ClipServices/ClipServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface CPSDeveloperOverride : NSObject <NSCopying, NSSecureCoding> {

	CGImageRef _heroImage;
	NSString* _invocationURL;
	NSString* _clipBundleID;
	NSString* _title;
	NSString* _subtitle;
	long long _action;

}

@property (nonatomic,copy) NSString * invocationURL;                   //@synthesize invocationURL=_invocationURL - In the implementation block
@property (nonatomic,copy) NSString * clipBundleID;                    //@synthesize clipBundleID=_clipBundleID - In the implementation block
@property (assign,nonatomic) CGImageRef heroImage; 
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) long long action;                         //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSURL * heroImageURL; 
@property (nonatomic,readonly) BOOL isComplete; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(BOOL)supportsSecureCoding;
+(id)allOverrides;
+(BOOL)hasOverride;
+(id)overrideForURL:(id)arg1 ;
+(void)loadAllOverridesIfNeeded;
+(unsigned long long)_indexOf:(id)arg1 ;
+(void)persistAllOverrides;
-(void)clear;
-(id)dictionaryRepresentation;
-(BOOL)isComplete;
-(NSString *)clipBundleID;
-(void)setHeroImage:(CGImageRef)arg1 ;
-(void)save;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isValid;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)heroImageURL;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setClipBundleID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(CGImageRef)heroImage;
-(NSString *)invocationURL;
-(void)setInvocationURL:(NSString *)arg1 ;
@end

