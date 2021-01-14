/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchOSUpdateStatusResultObject : CATTaskResultObject {

	NSString* _productKey;
	unsigned long long _status;
	double _downloadPercentComplete;

}

@property (nonatomic,copy) NSString * productKey;                         //@synthesize productKey=_productKey - In the implementation block
@property (assign,nonatomic) unsigned long long status;                   //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double downloadPercentComplete;              //@synthesize downloadPercentComplete=_downloadPercentComplete - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptionForStatus:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(NSString *)productKey;
-(double)downloadPercentComplete;
-(id)initWithProductKey:(id)arg1 status:(unsigned long long)arg2 downloadPercentComplete:(double)arg3 ;
-(void)setProductKey:(NSString *)arg1 ;
-(void)setDownloadPercentComplete:(double)arg1 ;
-(unsigned long long)status;
@end

