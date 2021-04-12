/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2EncryptedPayload.h>

@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload {

	unsigned _fragmentNumber;
	unsigned _totalFragments;
	unsigned long long _nextPayload;

}

@property (assign) unsigned fragmentNumber;                     //@synthesize fragmentNumber=_fragmentNumber - In the implementation block
@property (assign) unsigned totalFragments;                     //@synthesize totalFragments=_totalFragments - In the implementation block
@property (assign) unsigned long long nextPayload;              //@synthesize nextPayload=_nextPayload - In the implementation block
+(id)copyTypeDescription;
-(unsigned long long)type;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(unsigned)fragmentNumber;
-(unsigned)totalFragments;
-(void)setFragmentNumber:(unsigned)arg1 ;
-(void)setTotalFragments:(unsigned)arg1 ;
-(unsigned long long)nextPayload;
-(void)setNextPayload:(unsigned long long)arg1 ;
@end

