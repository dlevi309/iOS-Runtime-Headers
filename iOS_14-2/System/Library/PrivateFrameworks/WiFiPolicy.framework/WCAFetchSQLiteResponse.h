/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WCAFetchResponse.h>

@class NSArray;

@interface WCAFetchSQLiteResponse : WCAFetchResponse {

	NSArray* _records;

}

@property (nonatomic,copy) NSArray * records;              //@synthesize records=_records - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRecords:(NSArray *)arg1 ;
-(NSArray *)records;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRecords:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

