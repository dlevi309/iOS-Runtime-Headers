/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TADeviceRecord, TAVisitState;

@interface TAPersistenceStore : NSObject <NSSecureCoding> {

	TADeviceRecord* _deviceRecord;
	TAVisitState* _visitState;

}

@property (nonatomic,retain) TADeviceRecord * deviceRecord;              //@synthesize deviceRecord=_deviceRecord - In the implementation block
@property (nonatomic,retain) TAVisitState * visitState;                  //@synthesize visitState=_visitState - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDeviceRecord:(TADeviceRecord *)arg1 ;
-(TAVisitState *)visitState;
-(TADeviceRecord *)deviceRecord;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setVisitState:(TAVisitState *)arg1 ;
@end

