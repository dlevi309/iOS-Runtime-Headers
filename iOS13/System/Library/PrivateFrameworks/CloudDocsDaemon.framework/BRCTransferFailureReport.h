/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSError *)error;
-(id)initWithError:(id)arg1 ;
-(NSDate *)lastFailureDate;
-(BOOL)isEqualToTransferFailureReport:(id)arg1 ;
-(void)encounteredErrorWithPCSState:(unsigned)arg1 privateDB:(BOOL)arg2 atDate:(id)arg3 ;
-(NSDictionary *)privateDBErrorCountByPCSState;
-(NSDictionary *)shareDBErrorCountByPCSState;
@end

