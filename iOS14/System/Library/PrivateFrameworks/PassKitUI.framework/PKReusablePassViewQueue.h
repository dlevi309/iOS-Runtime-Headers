/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSMutableSet;

@interface PKReusablePassViewQueue : NSObject {

	NSMutableSet* _passViews;

}
-(void)enqueueReusablePassView:(id)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 ;
-(id)dequeueReusablePassView;
@end

