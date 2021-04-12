/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@interface TSUDownloadTaskProgress : NSObject {

	BOOL _isActive;
	long long _totalBytesDownloaded;
	long long _totalBytesExpectedToBeDownloaded;

}

@property (assign,nonatomic) BOOL isActive;                                           //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) long long totalBytesDownloaded;                          //@synthesize totalBytesDownloaded=_totalBytesDownloaded - In the implementation block
@property (assign,nonatomic) long long totalBytesExpectedToBeDownloaded;              //@synthesize totalBytesExpectedToBeDownloaded=_totalBytesExpectedToBeDownloaded - In the implementation block
-(id)description;
-(BOOL)isActive;
-(void)setIsActive:(BOOL)arg1 ;
-(long long)totalBytesExpectedToBeDownloaded;
-(void)setTotalBytesExpectedToBeDownloaded:(long long)arg1 ;
-(void)setTotalBytesDownloaded:(long long)arg1 ;
-(long long)totalBytesDownloaded;
@end

