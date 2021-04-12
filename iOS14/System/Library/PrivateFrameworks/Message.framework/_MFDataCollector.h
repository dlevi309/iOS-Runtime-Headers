/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFGuaranteedCollectingDataConsumer.h>

@class MFMailMessageLibrary, MFLibraryMessage, MFBufferedDataConsumer, MFFileCompressionQueue, NSString;

@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer> {

	MFMailMessageLibrary* _library;
	MFLibraryMessage* _message;
	MFBufferedDataConsumer* _consumer;
	MFFileCompressionQueue* _compressionQueue;
	NSString* _part;
	BOOL _partial;
	BOOL _incomplete;
	BOOL _relaxDataProtection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(BOOL)arg4 incomplete:(BOOL)arg5 relaxDataProtection:(BOOL)arg6 compressionQueue:(id)arg7 ;
-(void)done;
-(id)pathForStorage;
-(id)data;
-(long long)appendData:(id)arg1 ;
@end

