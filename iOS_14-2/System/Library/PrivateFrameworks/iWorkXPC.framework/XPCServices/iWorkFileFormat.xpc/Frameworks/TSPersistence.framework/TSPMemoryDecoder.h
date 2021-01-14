/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPDecoder.h>

@protocol TSPMemoryDecoderDelegate, OS_dispatch_data;
@class NSObject, NSString;

@interface TSPMemoryDecoder : NSObject <TSPDecoder> {

	id<TSPMemoryDecoderDelegate> _delegate;
	NSObject*<OS_dispatch_data> _metadataDispatchData;
	NSObject*<OS_dispatch_data> _rootObjectComponentDispatchData;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> metadataDispatchData;                         //@synthesize metadataDispatchData=_metadataDispatchData - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> rootObjectComponentDispatchData;              //@synthesize rootObjectComponentDispatchData=_rootObjectComponentDispatchData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;
-(id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2 ;
-(id)initWithMetadataDispatchData:(id)arg1 rootObjectComponentDispatchData:(id)arg2 delegate:(id)arg3 ;
-(id)initWithEncodedData:(id)arg1 delegate:(id)arg2 ;
-(NSObject*<OS_dispatch_data>)metadataDispatchData;
-(NSObject*<OS_dispatch_data>)rootObjectComponentDispatchData;
@end

