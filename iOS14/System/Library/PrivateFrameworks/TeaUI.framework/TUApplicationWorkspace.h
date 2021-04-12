/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@class LSApplicationWorkspace;

@interface TUApplicationWorkspace : NSObject {

	LSApplicationWorkspace* _applicationWorkspace;

}

@property (nonatomic,readonly) LSApplicationWorkspace * applicationWorkspace;              //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
+(id)shared;
-(void)openSensitiveURL:(id)arg1 options:(id)arg2 ;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(LSApplicationWorkspace *)applicationWorkspace;
@end

