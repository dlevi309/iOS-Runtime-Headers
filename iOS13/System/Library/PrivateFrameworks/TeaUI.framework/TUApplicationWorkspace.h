/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@class LSApplicationWorkspace;

@interface TUApplicationWorkspace : NSObject {

	LSApplicationWorkspace* _applicationWorkspace;

}

@property (nonatomic,readonly) LSApplicationWorkspace * applicationWorkspace;              //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
+(id)shared;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(LSApplicationWorkspace *)applicationWorkspace;
-(void)openSenstiveURL:(id)arg1 options:(id)arg2 ;
@end

