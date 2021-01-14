/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOAnalyticsHandlingInfo : NSObject <NSSecureCoding> {

	long long _logMsgType;
	long long _persistCount;
	long long _uploadSuccessCountOnWifi;
	long long _uploadSuccessByteCountOnWifi;
	long long _uploadSuccessCountOnCellular;
	long long _uploadSuccessByteCountOnCellular;
	long long _uploadFailureCount;
	long long _dbExpireCount;

}

@property (assign,nonatomic) long long logMsgType;                                    //@synthesize logMsgType=_logMsgType - In the implementation block
@property (assign,nonatomic) long long persistCount;                                  //@synthesize persistCount=_persistCount - In the implementation block
@property (assign,nonatomic) long long uploadSuccessCountOnWifi;                      //@synthesize uploadSuccessCountOnWifi=_uploadSuccessCountOnWifi - In the implementation block
@property (assign,nonatomic) long long uploadSuccessByteCountOnWifi;                  //@synthesize uploadSuccessByteCountOnWifi=_uploadSuccessByteCountOnWifi - In the implementation block
@property (assign,nonatomic) long long uploadSuccessCountOnCellular;                  //@synthesize uploadSuccessCountOnCellular=_uploadSuccessCountOnCellular - In the implementation block
@property (assign,nonatomic) long long uploadSuccessByteCountOnCellular;              //@synthesize uploadSuccessByteCountOnCellular=_uploadSuccessByteCountOnCellular - In the implementation block
@property (assign,nonatomic) long long uploadFailureCount;                            //@synthesize uploadFailureCount=_uploadFailureCount - In the implementation block
@property (assign,nonatomic) long long dbExpireCount;                                 //@synthesize dbExpireCount=_dbExpireCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)logMsgType;
-(long long)persistCount;
-(void)setLogMsgType:(long long)arg1 ;
-(void)setPersistCount:(long long)arg1 ;
-(long long)uploadSuccessCountOnWifi;
-(void)setUploadSuccessCountOnWifi:(long long)arg1 ;
-(long long)uploadSuccessByteCountOnWifi;
-(void)setUploadSuccessByteCountOnWifi:(long long)arg1 ;
-(long long)uploadSuccessCountOnCellular;
-(void)setUploadFailureCount:(long long)arg1 ;
-(void)setUploadSuccessCountOnCellular:(long long)arg1 ;
-(long long)uploadSuccessByteCountOnCellular;
-(long long)uploadFailureCount;
-(void)setUploadSuccessByteCountOnCellular:(long long)arg1 ;
-(long long)dbExpireCount;
-(void)setDbExpireCount:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

