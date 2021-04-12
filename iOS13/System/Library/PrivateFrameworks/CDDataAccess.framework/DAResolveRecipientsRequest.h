/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/


@class NSArray, NSDate;

@interface DAResolveRecipientsRequest : NSObject {

	BOOL _retrieveCertificates;
	BOOL _retrieveAvailablilty;
	NSArray* _emailAddresses;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (nonatomic,retain) NSArray * emailAddresses;               //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (assign,nonatomic) BOOL retrieveCertificates;              //@synthesize retrieveCertificates=_retrieveCertificates - In the implementation block
@property (assign,nonatomic) BOOL retrieveAvailablilty;              //@synthesize retrieveAvailablilty=_retrieveAvailablilty - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                       //@synthesize endTime=_endTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)emailAddresses;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 ;
-(void)setRetrieveCertificates:(BOOL)arg1 ;
-(void)setRetrieveAvailablilty:(BOOL)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 retrieveCertificates:(BOOL)arg2 retrieveAvailability:(BOOL)arg3 withStartTime:(id)arg4 endTime:(id)arg5 ;
-(BOOL)retrieveCertificates;
-(BOOL)retrieveAvailablilty;
@end

