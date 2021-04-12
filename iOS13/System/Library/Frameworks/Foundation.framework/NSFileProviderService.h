/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol OS_dispatch_group;
@class NSString, NSObject;

@interface NSFileProviderService : NSObject {

	NSString* _name;
	id _endpointCreatingProxy;
	NSObject*<OS_dispatch_group> _requestFinishedGroup;

}

@property (copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 endpointCreatingProxy:(id)arg2 requestFinishedGroup:(id)arg3 ;
-(void)getFileProviderConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)fetchFileProviderConnectionAndReturnError:(id*)arg1 ;
@end

