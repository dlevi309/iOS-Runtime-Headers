/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
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
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSArray *)emailAddresses;
-(id)description;
-(unsigned long long)hash;
-(void)setRetrieveCertificates:(BOOL)arg1 ;
-(void)setRetrieveAvailablilty:(BOOL)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 retrieveCertificates:(BOOL)arg2 retrieveAvailability:(BOOL)arg3 withStartTime:(id)arg4 endTime:(id)arg5 ;
-(BOOL)retrieveCertificates;
-(BOOL)retrieveAvailablilty;
-(void)setEndTime:(NSDate *)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 ;
-(NSDate *)endTime;
-(NSDate *)startTime;
-(BOOL)isEqual:(id)arg1 ;
@end

