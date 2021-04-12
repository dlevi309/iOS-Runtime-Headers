/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)endpoint;
-(NSString *)input;
-(void)setEndpoint:(unsigned long long)arg1 ;
-(void)setInput:(NSString *)arg1 ;
-(id)initWithInput:(id)arg1 endpoint:(unsigned long long)arg2 ;
@end

