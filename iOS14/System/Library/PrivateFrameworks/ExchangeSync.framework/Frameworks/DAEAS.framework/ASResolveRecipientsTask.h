/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>

@class NSArray, NSDate;

@interface ASResolveRecipientsTask : ASTask {

	NSArray* _emailAddresses;
	BOOL _retrieveCertificates;
	BOOL _retrieveAvailability;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (assign,nonatomic) BOOL retrieveCertificates;              //@synthesize retrieveCertificates=_retrieveCertificates - In the implementation block
@property (assign,nonatomic) BOOL retrieveAvailability;              //@synthesize retrieveAvailability=_retrieveAvailability - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                       //@synthesize endTime=_endTime - In the implementation block
-(void)setStartTime:(NSDate *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)setRetrieveCertificates:(BOOL)arg1 ;
-(BOOL)retrieveCertificates;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(NSDate *)startTime;
-(id)requestBody;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)initForCertificatesWithEmailAddresses:(id)arg1 ;
-(id)_roundDownTo30MinuteBoundary:(id)arg1 ;
-(id)_roundUpTo30MinuteBoundary:(id)arg1 ;
-(BOOL)retrieveAvailability;
-(long long)responseStatusForExchangeStatus:(int)arg1 ;
-(long long)certStatusForExchangeStatus:(int)arg1 ;
-(long long)availabilityStatusForExchangeStatus:(int)arg1 ;
-(id)initFreeBusyQueryWithStartDate:(id)arg1 endDate:(id)arg2 emailAddresses:(id)arg3 ;
-(void)setRetrieveAvailability:(BOOL)arg1 ;
@end

