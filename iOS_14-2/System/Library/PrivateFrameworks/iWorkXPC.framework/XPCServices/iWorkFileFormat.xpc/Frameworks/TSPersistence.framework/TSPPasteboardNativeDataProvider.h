/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPDecoder.h>

@class TSPPasteboard, NSMutableDictionary, NSArray, NSString;

@interface TSPPasteboardNativeDataProvider : NSObject <TSPDecoder> {

	TSPPasteboard* _pasteboard;
	NSMutableDictionary* _nativeData;
	NSMutableDictionary* _tspData;

}

@property (nonatomic,readonly) NSArray * promisedDataTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)debugDescription;
-(id)dataForIdentifier:(long long)arg1 ;
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;
-(id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(id)initWithPasteboard:(id)arg1 nativeData:(id)arg2 tspData:(id)arg3 ;
-(void)loadNativeData;
-(NSArray *)promisedDataTypes;
@end

