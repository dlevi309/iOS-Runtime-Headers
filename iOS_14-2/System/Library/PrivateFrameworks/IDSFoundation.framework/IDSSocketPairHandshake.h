/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@interface IDSSocketPairHandshake : IDSSocketPairMessage {

	unsigned _versionNumber;

}

@property (nonatomic,readonly) unsigned versionNumber;              //@synthesize versionNumber=_versionNumber - In the implementation block
-(unsigned)versionNumber;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithVersionNumber:(unsigned)arg1 ;
-(unsigned char)command;
@end

