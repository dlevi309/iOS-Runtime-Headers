/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface _PFRequestExecutor : NSObject {

	NSObject*<OS_dispatch_group> _requestGroup;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> requestGroup;              //@synthesize requestGroup=_requestGroup - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)wait;
-(void)requestFinished;
-(BOOL)executeRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(NSObject*<OS_dispatch_group>)requestGroup;
@end

