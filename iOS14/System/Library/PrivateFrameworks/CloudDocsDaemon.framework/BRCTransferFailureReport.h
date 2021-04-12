/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class NSMutableDictionary, NSError, NSDate, NSDictionary;

@interface BRCTransferFailureReport : NSObject {

	NSMutableDictionary* _privateDBErrorCountByPCSState;
	NSMutableDictionary* _shareDBErrorCountByPCSState;
	NSError* _error;
	NSDate* _lastFailureDate;

}

@property (nonatomic,readonly) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDate * lastFailureDate;                                  //@synthesize lastFailureDate=_lastFailureDate - In the implementation block
@property (nonatomic,readonly) NSDictionary * privateDBErrorCountByPCSState;              //@synthesize privateDBErrorCountByPCSState=_privateDBErrorCountByPCSState - In the implementation block
@property (nonatomic,readonly) NSDictionary * shareDBErrorCountByPCSState;                //@synthesize shareDBErrorCountByPCSState=_shareDBErrorCountByPCSState - In the implementation block
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
-(id)description;
-(NSDate *)lastFailureDate;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToTransferFailureReport:(id)arg1 ;
-(void)encounteredErrorWithPCSState:(unsigned)arg1 privateDB:(BOOL)arg2 atDate:(id)arg3 ;
-(NSDictionary *)privateDBErrorCountByPCSState;
-(NSDictionary *)shareDBErrorCountByPCSState;
@end

