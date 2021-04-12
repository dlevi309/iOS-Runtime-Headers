/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPushToken:(NSData *)arg1 ;
-(NSArray *)pnrReqList;
-(NSNumber *)attemptCount;
-(NSData *)pushToken;
-(void)setPnrReqList:(NSArray *)arg1 ;
-(void)setAttemptCount:(NSNumber *)arg1 ;
-(BOOL)isEqualToCTPNRRequestType:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

