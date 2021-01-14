/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/

#import <libobjc.A.dylib/NSFileProviderServiceSource.h>

@class NSString, LiveFSFPExtensionHelper;

@interface LiveFSClientServiceSource : NSObject <NSFileProviderServiceSource> {

	LiveFSFPExtensionHelper* ex;
	NSString* ident;

}

@property (nonatomic,copy,readonly) NSString * serviceName; 
-(id)makeListenerEndpointAndReturnError:(id*)arg1 ;
-(NSString *)serviceName;
-(id)initWithFileProviderExtension:(id)arg1 itemIdentifier:(id)arg2 ;
@end

