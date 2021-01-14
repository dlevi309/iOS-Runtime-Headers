/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSFileCoordinationRetainedAccess.h>

@protocol OS_dispatch_group;
@class NSObject, NSString;

@interface NSFileCoordinatorReacquisitionBlockCompletion : NSObject <NSFileCoordinationRetainedAccess> {

	NSObject*<OS_dispatch_group> group;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)completionWithBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)decrement;
-(void)increment;
-(void)dealloc;
@end

