/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDate, NSDictionary, NSData;

@interface ICSuzeLeaseResponse : NSObject {

	NSDate* _requestDate;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSData * clientData; 
@property (nonatomic,copy,readonly) NSDate * leaseExpirationDate; 
-(NSData *)clientData;
-(NSDate *)leaseExpirationDate;
-(id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 ;
@end

