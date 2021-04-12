/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSDate, CLLocation;

@interface _MKLocalSearchExternalTransitLookupParameters : NSObject <NSCopying> {

	NSArray* _stationCodes;
	NSString* _sourceIdentifier;
	NSDate* _transactionDate;
	CLLocation* _transactionLocation;

}

@property (nonatomic,copy) NSArray * stationCodes;                          //@synthesize stationCodes=_stationCodes - In the implementation block
@property (nonatomic,copy) NSString * sourceIdentifier;                     //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                      //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,retain) CLLocation * transactionLocation;              //@synthesize transactionLocation=_transactionLocation - In the implementation block
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSArray *)stationCodes;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(void)setStationCodes:(NSArray *)arg1 ;
-(CLLocation *)transactionLocation;
-(void)setTransactionLocation:(CLLocation *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sourceIdentifier;
@end

