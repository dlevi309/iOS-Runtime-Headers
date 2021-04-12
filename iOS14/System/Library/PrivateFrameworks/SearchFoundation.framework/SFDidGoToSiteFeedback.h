/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFDidGoToSiteFeedback : SFFeedback {

	NSString* _input;

}

@property (nonatomic,copy) NSString * input;              //@synthesize input=_input - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)input;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInput:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInput:(id)arg1 ;
@end

