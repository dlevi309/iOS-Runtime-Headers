/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface DAResolvedRecipient : NSObject {

	long long _status;
	long long _certificatesStatus;
	long long _availabilityStatus;
	NSString* _mergedFreeBusy;
	NSMutableDictionary* _mResolvedEmailToX509Certs;

}

@property (assign,nonatomic) long long status;                                             //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long certificatesStatus;                                 //@synthesize certificatesStatus=_certificatesStatus - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mResolvedEmailToX509Certs;              //@synthesize mResolvedEmailToX509Certs=_mResolvedEmailToX509Certs - In the implementation block
@property (assign,nonatomic) long long availabilityStatus;                                 //@synthesize availabilityStatus=_availabilityStatus - In the implementation block
@property (nonatomic,retain) NSString * mergedFreeBusy;                                    //@synthesize mergedFreeBusy=_mergedFreeBusy - In the implementation block
@property (nonatomic,readonly) NSDictionary * resolvedEmailToX509Certs; 
-(void)setAvailabilityStatus:(long long)arg1 ;
-(long long)availabilityStatus;
-(id)description;
-(NSMutableDictionary *)mResolvedEmailToX509Certs;
-(long long)certificatesStatus;
-(NSString *)mergedFreeBusy;
-(void)setMResolvedEmailToX509Certs:(NSMutableDictionary *)arg1 ;
-(void)addCert:(id)arg1 forEmailAddress:(id)arg2 ;
-(void)setCertificatesStatus:(long long)arg1 ;
-(void)setMergedFreeBusy:(NSString *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(NSDictionary *)resolvedEmailToX509Certs;
-(long long)status;
@end

