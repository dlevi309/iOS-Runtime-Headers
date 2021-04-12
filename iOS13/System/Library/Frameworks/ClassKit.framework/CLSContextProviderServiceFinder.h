/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)stop;
-(void)start;
-(id)initWithDelegate:(id)arg1 ;
-(NSArray *)availableServices;
@end

