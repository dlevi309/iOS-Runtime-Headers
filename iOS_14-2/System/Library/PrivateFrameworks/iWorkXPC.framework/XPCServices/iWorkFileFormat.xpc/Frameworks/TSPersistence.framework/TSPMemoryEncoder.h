/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPEncoder.h>

@class TSPMemoryComponentWriteChannel, NSString;

@interface TSPMemoryEncoder : NSObject <TSPEncoder> {

	BOOL _alwaysDefragmentData;
	TSPMemoryComponentWriteChannel* _metadataWriteChannel;
	TSPMemoryComponentWriteChannel* _rootComponentWriteChannel;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> metadataDispatchData; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> rootObjectComponentDispatchData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)encodedData;
-(id)metadataData;
-(id)initWithAlwaysDefragmentData:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_data>)metadataDispatchData;
-(NSObject*<OS_dispatch_data>)rootObjectComponentDispatchData;
-(id)newRootObjectComponentWriteChannel;
-(id)newMetadataComponentWriteChannel;
-(id)rootObjectComponentData;
@end

