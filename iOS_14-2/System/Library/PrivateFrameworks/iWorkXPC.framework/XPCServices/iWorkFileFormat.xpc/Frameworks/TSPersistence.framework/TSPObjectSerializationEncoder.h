/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPEncoder.h>

@protocol OS_dispatch_queue, OS_dispatch_data;
@class NSError, NSObject, TSPMemoryComponentWriteChannel, NSString;

@interface TSPObjectSerializationEncoder : NSObject <TSPEncoder> {

	BOOL _alwaysDefragmentData;
	NSError* _error;
	BOOL _isFinished;
	NSObject*<OS_dispatch_queue> _accessQueue;
	ObjectSerializationDirectory* _directory;
	TSPMemoryComponentWriteChannel* _metadataWriteChannel;
	TSPMemoryComponentWriteChannel* _rootComponentWriteChannel;
	NSObject*<OS_dispatch_data> _encodedData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithAlwaysDefragmentData:(BOOL)arg1 ;
-(void)appendData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishEncodingWithCompletion:(/*^block*/id)arg1 ;
-(id)newRootObjectComponentWriteChannel;
-(id)newMetadataComponentWriteChannel;
@end

