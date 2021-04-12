/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NRPBTermsEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NRTermsEvent : NRPBTermsEvent <NSSecureCoding> {

	BOOL _flaggedForSend;
	BOOL _writable;
	NSString* _termsDigest;

}

@property (nonatomic,retain) NSString * termsDigest;              //@synthesize termsDigest=_termsDigest - In the implementation block
@property (assign,nonatomic) BOOL flaggedForSend;                 //@synthesize flaggedForSend=_flaggedForSend - In the implementation block
@property (assign,nonatomic) BOOL writable;                       //@synthesize writable=_writable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)digestFromData:(id)arg1 ;
+(id)loadTermsWithPath:(id)arg1 ;
+(id)eventWithProtobuf:(id)arg1 ;
-(void)setEventType:(int)arg1 ;
-(BOOL)writable;
-(void)setPresentationReason:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDeviceID:(id)arg1 ;
-(void)setEventDate:(double)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)termsText;
-(BOOL)isTermsAlreadyArchived;
-(void)setWritable:(BOOL)arg1 ;
-(void)saveTerms;
-(void)setTermsText:(id)arg1 ;
-(void)setDocumentationID:(id)arg1 ;
-(void)setPresentationLocation:(int)arg1 ;
-(void)setAcknowledgedDeviceName:(id)arg1 ;
-(NSString *)termsDigest;
-(void)setAcknowledgedDeviceSerialNumber:(id)arg1 ;
-(void)setDisplayDeviceName:(id)arg1 ;
-(void)setDisplayDeviceSerialNumber:(id)arg1 ;
-(void)setLoggingProcessName:(id)arg1 ;
-(void)_setEventType:(unsigned long long)arg1 ;
-(void)updateEventDate;
-(void)_setLoggingProcessName:(id)arg1 ;
-(void)setTermsDigest:(NSString *)arg1 ;
-(BOOL)flaggedForSend;
-(void)setFlaggedForSend:(BOOL)arg1 ;
@end

