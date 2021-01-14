/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@interface SFSearchViewDisappearFeedback : SFFeedback {

	long long _viewDisappearEvent;

}

@property (assign,nonatomic) long long viewDisappearEvent;              //@synthesize viewDisappearEvent=_viewDisappearEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithEvent:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)viewDisappearEvent;
-(id)initWithCoder:(id)arg1 ;
-(void)setViewDisappearEvent:(long long)arg1 ;
@end

