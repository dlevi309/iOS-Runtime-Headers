/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NEIKEv2PrivateNotify : NSObject <NSCopying> {

	unsigned short _notifyStatus;
	NSData* _notifyData;

}

@property (assign,nonatomic) unsigned short notifyStatus;              //@synthesize notifyStatus=_notifyStatus - In the implementation block
@property (nonatomic,retain) NSData * notifyData;                      //@synthesize notifyData=_notifyData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNotifyStatus:(unsigned short)arg1 ;
-(void)setNotifyData:(NSData *)arg1 ;
-(unsigned short)notifyStatus;
-(NSData *)notifyData;
-(id)initWithNotifyStatus:(unsigned short)arg1 notifyData:(id)arg2 ;
@end

