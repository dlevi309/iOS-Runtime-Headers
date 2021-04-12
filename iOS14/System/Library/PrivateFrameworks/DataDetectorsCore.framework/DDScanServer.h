/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
*/

#import <DataDetectorsCore/DDScannerService.h>

@interface DDScanServer : DDScannerService {

	long long _options;
	double _timeout;

}

@property (assign,nonatomic) long long options;              //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) double timeout;                 //@synthesize timeout=_timeout - In the implementation block
-(id)init;
-(void)setTimeout:(double)arg1 ;
-(long long)options;
-(double)timeout;
-(void)setOptions:(long long)arg1 ;
-(id)scanString:(id)arg1 ;
-(void)scanString:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
@end

