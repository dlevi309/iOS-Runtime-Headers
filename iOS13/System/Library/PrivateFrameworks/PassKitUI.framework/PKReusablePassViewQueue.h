/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSMutableSet;

@interface PKReusablePassViewQueue : NSObject {

	NSMutableSet* _passViews;

}
-(id)initWithCount:(unsigned long long)arg1 ;
-(id)dequeueReusablePassView;
-(void)enqueueReusablePassView:(id)arg1 ;
@end

