/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data; 
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(unsigned char)command;
@end

