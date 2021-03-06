/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIUserActionUserActivityOpener.h>

@class CNLSApplicationWorkspace, NSString;

@interface _CNUIUserActionUserActivityOpener : NSObject <CNUIUserActionUserActivityOpener> {

	CNLSApplicationWorkspace* _applicationWorkspace;

}

@property (nonatomic,readonly) CNLSApplicationWorkspace * applicationWorkspace;              //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorForUnableToOpenUserActivity:(id)arg1 withUnderlyingError:(id)arg2 ;
-(id)init;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(CNLSApplicationWorkspace *)applicationWorkspace;
-(id)openUserActivity:(id)arg1 usingBundleIdentifier:(id)arg2 withScheduler:(id)arg3 ;
@end

