/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFMessageDataConsumerFactory.h>

@class MFMessageLibrary, MFMessage, NSString;

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory> {

	MFMessageLibrary* _library;
	MFMessage* _message;

}

@property (nonatomic,retain) MFMessageLibrary * library;              //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) MFMessage * message;                     //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MFMessage *)message;
-(void)setMessage:(MFMessage *)arg1 ;
-(MFMessageLibrary *)library;
-(void)setLibrary:(MFMessageLibrary *)arg1 ;
-(id)dataConsumerForPart:(id)arg1 ;
@end

