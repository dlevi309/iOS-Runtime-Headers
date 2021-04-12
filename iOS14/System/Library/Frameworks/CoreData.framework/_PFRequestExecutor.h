/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface _PFRequestExecutor : NSObject {

	NSObject*<OS_dispatch_group> _requestGroup;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> requestGroup;              //@synthesize requestGroup=_requestGroup - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_group>)requestGroup;
-(void)dealloc;
@end

