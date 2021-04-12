/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/


@protocol CLSContextProviderServiceFinderDelegate, OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableArray, NSArray;

@interface CLSContextProviderServiceFinder : NSObject {

	id<CLSContextProviderServiceFinderDelegate> _delegate;
	id _extensionsFinderContext;
	NSObject*<OS_dispatch_queue> _servicesQueue;
	NSDictionary* _extensionAttributes;
	NSMutableArray* _mutableAvailableServices;

}

@property (nonatomic,copy,readonly) NSArray * availableServices; 
-(id)init;
-(void)start;
-(void)stop;
-(id)initWithDelegate:(id)arg1 ;
-(NSArray *)availableServices;
@end

