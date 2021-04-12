/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/

#import <libobjc.A.dylib/NSFileProviderServiceSource.h>

@class NSString, LiveFSFPExtensionHelper;

@interface LiveFSClientServiceSource : NSObject <NSFileProviderServiceSource> {

	LiveFSFPExtensionHelper* ex;
	NSString* ident;

}

@property (nonatomic,copy,readonly) NSString * serviceName; 
-(NSString *)serviceName;
-(id)makeListenerEndpointAndReturnError:(id*)arg1 ;
-(id)initWithFileProviderExtension:(id)arg1 itemIdentifier:(id)arg2 ;
@end

