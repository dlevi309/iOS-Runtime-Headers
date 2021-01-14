/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TIAnalyticsMetricsContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _inputLanguage;
	NSString* _inputRegion;

}

@property (nonatomic,readonly) NSString * inputLanguage;                       //@synthesize inputLanguage=_inputLanguage - In the implementation block
@property (nonatomic,readonly) NSString * inputRegion;                         //@synthesize inputRegion=_inputRegion - In the implementation block
@property (nonatomic,readonly) NSString * inputLanguageAndRegion; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)inputRegion;
-(NSString *)inputLanguageAndRegion;
-(id)initWithInputLanguage:(id)arg1 inputRegion:(id)arg2 ;
-(NSString *)inputLanguage;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

