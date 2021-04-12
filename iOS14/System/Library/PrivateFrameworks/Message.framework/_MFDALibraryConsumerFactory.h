/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MFMessageLibrary *)library;
-(void)setMessage:(MFMessage *)arg1 ;
-(MFMessage *)message;
-(void)setLibrary:(MFMessageLibrary *)arg1 ;
-(id)dataConsumerForPart:(id)arg1 ;
@end

