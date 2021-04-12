/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>

@class NSString, NSDictionary;

@interface CSLocalizedString : NSString <CSCoderEncoder> {

	BOOL _didTrySettingDefaultString;
	NSString* _defaultString;
	NSDictionary* _localizedStrings;

}

@property (nonatomic,readonly) NSString * defaultString;                     //@synthesize defaultString=_defaultString - In the implementation block
@property (assign,nonatomic) BOOL didTrySettingDefaultString;                //@synthesize didTrySettingDefaultString=_didTrySettingDefaultString - In the implementation block
@property (nonatomic,readonly) NSDictionary * localizedStrings;              //@synthesize localizedStrings=_localizedStrings - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(NSString *)defaultString;
-(id)initWithLocalizedStrings:(id)arg1 ;
-(NSDictionary *)localizedStrings;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(id)localizedString;
-(void)encodeWithCSCoder:(id)arg1 ;
-(BOOL)didTrySettingDefaultString;
-(id)initWithCoder:(id)arg1 ;
-(void)setDidTrySettingDefaultString:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

