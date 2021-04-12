/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(long long)logMsgType;
-(void)setLogMsgType:(long long)arg1 ;
-(long long)persistCount;
-(void)setPersistCount:(long long)arg1 ;
-(long long)uploadSuccessCountOnWifi;
-(void)setUploadSuccessCountOnWifi:(long long)arg1 ;
-(long long)uploadSuccessByteCountOnWifi;
-(void)setUploadSuccessByteCountOnWifi:(long long)arg1 ;
-(long long)uploadSuccessCountOnCellular;
-(void)setUploadSuccessCountOnCellular:(long long)arg1 ;
-(long long)uploadSuccessByteCountOnCellular;
-(void)setUploadSuccessByteCountOnCellular:(long long)arg1 ;
-(long long)uploadFailureCount;
-(void)setUploadFailureCount:(long long)arg1 ;
-(long long)dbExpireCount;
-(void)setDbExpireCount:(long long)arg1 ;
@end
