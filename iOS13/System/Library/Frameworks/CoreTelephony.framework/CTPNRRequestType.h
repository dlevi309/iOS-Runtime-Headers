/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber, NSArray;

@interface CTPNRRequestType : NSObject <NSCopying, NSSecureCoding> {

	NSData* _pushToken;
	NSNumber* _attemptCount;
	NSArray* _pnrReqList;

}

@property (nonatomic,retain) NSData * pushToken;                   //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain) NSNumber * attemptCount;              //@synthesize attemptCount=_attemptCount - In the implementation block
@property (nonatomic,retain) NSArray * pnrReqList;                 //@synthesize pnrReqList=_pnrReqList - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)pushToken;
-(NSNumber *)attemptCount;
-(NSArray *)pnrReqList;
-(void)setAttemptCount:(NSNumber *)arg1 ;
-(BOOL)isEqualToCTPNRRequestType:(id)arg1 ;
-(void)setPushToken:(NSData *)arg1 ;
-(void)setPnrReqList:(NSArray *)arg1 ;
@end

