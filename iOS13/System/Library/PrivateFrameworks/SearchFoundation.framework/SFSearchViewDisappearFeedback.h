/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@interface SFSearchViewDisappearFeedback : SFFeedback {

	long long _viewDisappearEvent;

}

@property (assign,nonatomic) long long viewDisappearEvent;              //@synthesize viewDisappearEvent=_viewDisappearEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEvent:(long long)arg1 ;
-(long long)viewDisappearEvent;
-(void)setViewDisappearEvent:(long long)arg1 ;
@end

