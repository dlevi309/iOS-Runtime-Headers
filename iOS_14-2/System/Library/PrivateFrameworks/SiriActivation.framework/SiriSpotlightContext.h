/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriContext.h>

@class NSString;

@interface SiriSpotlightContext : SiriContext {

	NSString* _utteranceText;
	long long _source;

}

@property (nonatomic,copy) NSString * utteranceText;              //@synthesize utteranceText=_utteranceText - In the implementation block
@property (assign,nonatomic) long long source;                    //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUtteranceText:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)utteranceText;
-(void)setSource:(long long)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)source;
@end

