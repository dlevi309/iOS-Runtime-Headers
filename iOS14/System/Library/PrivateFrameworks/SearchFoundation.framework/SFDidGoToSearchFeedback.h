/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFDidGoToSearchFeedback : SFFeedback {

	NSString* _input;
	unsigned long long _endpoint;

}

@property (nonatomic,copy) NSString * input;                           //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) unsigned long long endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)input;
-(void)setEndpoint:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInput:(NSString *)arg1 ;
-(unsigned long long)endpoint;
-(id)initWithInput:(id)arg1 endpoint:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

