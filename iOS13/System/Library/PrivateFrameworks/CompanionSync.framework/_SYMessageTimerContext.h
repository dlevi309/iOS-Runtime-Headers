/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@class NSString;

@interface _SYMessageTimerContext : NSObject {

	unsigned long long _seqno;
	NSString* _identifier;

}

@property (assign,nonatomic) unsigned long long seqno;              //@synthesize seqno=_seqno - In the implementation block
@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)seqno;
-(void)setSeqno:(unsigned long long)arg1 ;
@end

