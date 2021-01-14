/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <ShazamKit/ShazamKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, SHSignatureMetrics, AVAudioTime, NSUUID, NSDate;

@interface SHSignature : NSObject <NSSecureCoding, NSCopying> {

	NSData* _dataRepresentation;
	SHSignatureMetrics* _metrics;
	AVAudioTime* _time;
	NSUUID* _ID;
	NSDate* _startDate;

}

@property (nonatomic,readonly) NSUUID * ID;                              //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) AVAudioTime * time;                         //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) SHSignatureMetrics * metrics;                 //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) NSData * dataRepresentation;              //@synthesize dataRepresentation=_dataRepresentation - In the implementation block
@property (nonatomic,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
+(id)signatureWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)signatureFromData:(id)arg1 atTime:(id)arg2 error:(id*)arg3 ;
-(void)setMetrics:(SHSignatureMetrics *)arg1 ;
-(NSUUID *)ID;
-(SHSignatureMetrics *)metrics;
-(AVAudioTime *)time;
-(void)setTime:(AVAudioTime *)arg1 ;
-(NSData *)dataRepresentation;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(double)length;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithID:(id)arg1 dataRepresentation:(id)arg2 startTime:(id)arg3 ;
@end

