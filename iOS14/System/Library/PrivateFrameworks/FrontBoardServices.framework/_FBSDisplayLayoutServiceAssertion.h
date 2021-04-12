/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithEndpoint:(id)arg1 qos:(char)arg2 observer:(/*^block*/id)arg3 ;
-(FBSDisplayLayout *)currentLayout;
-(void)invalidate;
-(void)dealloc;
@end

