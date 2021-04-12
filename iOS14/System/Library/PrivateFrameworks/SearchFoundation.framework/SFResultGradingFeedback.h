/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFResultFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SFResultGradingFeedback : SFResultFeedback <NSCopying> {

	unsigned long long _grade;
	NSString* _textFeedback;

}

@property (nonatomic,readonly) unsigned long long grade;              //@synthesize grade=_grade - In the implementation block
@property (nonatomic,copy) NSString * textFeedback;                   //@synthesize textFeedback=_textFeedback - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)grade;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTextFeedback:(NSString *)arg1 ;
-(NSString *)textFeedback;
-(id)initWithResult:(id)arg1 grade:(unsigned long long)arg2 ;
-(id)initWithResult:(id)arg1 grade:(unsigned long long)arg2 textFeedback:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

