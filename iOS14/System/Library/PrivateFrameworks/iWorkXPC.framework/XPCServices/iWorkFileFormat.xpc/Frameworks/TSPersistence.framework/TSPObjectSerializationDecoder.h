/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPDecoder.h>

@protocol OS_dispatch_data;
@class NSObject, NSMutableDictionary, NSString;

@interface TSPObjectSerializationDecoder : NSObject <TSPDecoder> {

	NSObject*<OS_dispatch_data> _encodedData;
	unsigned long long _encodedDataLength;
	NSMutableDictionary* _directory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithEncodedData:(id)arg1 ;
-(id)newReadChannelForLocator:(id)arg1 ;
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;
-(id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2 ;
@end

