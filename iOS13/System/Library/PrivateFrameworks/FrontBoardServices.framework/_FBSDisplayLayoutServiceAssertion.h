/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class _FBSDisplayLayoutService, FBSDisplayLayout, NSString;

@interface _FBSDisplayLayoutServiceAssertion : NSObject <BSInvalidatable> {

	os_unfair_lock_s _lock;
	_FBSDisplayLayoutService* _lock_service;

}

@property (nonatomic,readonly) FBSDisplayLayout * currentLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(FBSDisplayLayout *)currentLayout;
-(id)initWithEndpoint:(id)arg1 qos:(char)arg2 observer:(/*^block*/id)arg3 ;
@end

