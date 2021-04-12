/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NRPBTermsEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NRTermsEvent : NRPBTermsEvent <NSSecureCoding> {

	BOOL _writable;
	NSString* _termsDigest;

}

@property (nonatomic,retain) NSString * termsDigest;              //@synthesize termsDigest=_termsDigest - In the implementation block
@property (assign,nonatomic) BOOL writable;                       //@synthesize writable=_writable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pathToTermsCache;
+(id)stringForEventType:(unsigned long long)arg1 ;
+(id)digestFromData:(id)arg1 ;
+(BOOL)shouldAllowArchivingOfTermsTextToFile;
+(id)pathToTermsWithDigest:(id)arg1 ;
+(id)loadTermsWithPath:(id)arg1 ;
+(id)eventWithProtobuf:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEventDate:(double)arg1 ;
-(void)setEventType:(int)arg1 ;
-(BOOL)writable;
-(id)initWithDeviceID:(id)arg1 ;
-(void)setPresentationReason:(id)arg1 ;
-(void)setDocumentationID:(id)arg1 ;
-(void)setWritable:(BOOL)arg1 ;
-(id)termsText;
-(void)saveTerms;
-(void)setTermsText:(id)arg1 ;
-(void)setPresentationLocation:(int)arg1 ;
-(void)setAcknowledgedDeviceName:(id)arg1 ;
-(void)setAcknowledgedDeviceSerialNumber:(id)arg1 ;
-(void)setDisplayDeviceName:(id)arg1 ;
-(void)setDisplayDeviceSerialNumber:(id)arg1 ;
-(void)setLoggingProcessName:(id)arg1 ;
-(void)_setEventType:(unsigned long long)arg1 ;
-(void)updateEventDate;
-(void)_setLoggingProcessName:(id)arg1 ;
-(NSString *)termsDigest;
-(void)setTermsDigest:(NSString *)arg1 ;
@end

