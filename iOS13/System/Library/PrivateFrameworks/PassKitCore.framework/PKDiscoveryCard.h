/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKDiscoveryMedia, PKColor, PKDiscoveryCallToAction;

@interface PKDiscoveryCard : NSObject <NSSecureCoding> {

	NSString* _headingKey;
	NSString* _titleKey;
	NSString* _inlineDescriptionKey;
	PKDiscoveryMedia* _backgroundMedia;
	PKColor* _backgroundColor;
	PKDiscoveryCallToAction* _callToAction;
	long long _foregroundContentMode;
	NSString* _heading;
	NSString* _title;
	NSString* _inlineDescription;

}

@property (nonatomic,retain) NSString * heading;                                    //@synthesize heading=_heading - In the implementation block
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * headingKey;                               //@synthesize headingKey=_headingKey - In the implementation block
@property (nonatomic,readonly) NSString * titleKey;                                 //@synthesize titleKey=_titleKey - In the implementation block
@property (nonatomic,readonly) NSString * inlineDescriptionKey;                     //@synthesize inlineDescriptionKey=_inlineDescriptionKey - In the implementation block
@property (nonatomic,readonly) PKDiscoveryMedia * backgroundMedia;                  //@synthesize backgroundMedia=_backgroundMedia - In the implementation block
@property (nonatomic,readonly) PKColor * backgroundColor;                           //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) PKDiscoveryCallToAction * callToAction;              //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,readonly) long long foregroundContentMode;                     //@synthesize foregroundContentMode=_foregroundContentMode - In the implementation block
@property (nonatomic,readonly) NSString * inlineDescription;                        //@synthesize inlineDescription=_inlineDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)heading;
-(void)setHeading:(NSString *)arg1 ;
-(PKColor *)backgroundColor;
-(NSString *)titleKey;
-(void)localizeWithBundle:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(long long)foregroundContentMode;
-(NSString *)headingKey;
-(NSString *)inlineDescriptionKey;
-(PKDiscoveryMedia *)backgroundMedia;
-(PKDiscoveryCallToAction *)callToAction;
-(NSString *)inlineDescription;
@end

