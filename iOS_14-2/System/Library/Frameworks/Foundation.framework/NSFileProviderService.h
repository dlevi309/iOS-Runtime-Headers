/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithName:(id)arg1 endpointCreatingProxy:(id)arg2 requestFinishedGroup:(id)arg3 ;
-(void)getFileProviderConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)fetchFileProviderConnectionAndReturnError:(id*)arg1 ;
-(NSString *)name;
-(void)dealloc;
@end

