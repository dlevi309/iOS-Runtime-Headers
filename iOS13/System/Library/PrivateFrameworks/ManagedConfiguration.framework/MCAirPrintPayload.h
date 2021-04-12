/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableArray;

@interface MCAirPrintPayload : MCPayload {

	unsigned long long _airPrintCount;
	NSMutableArray* _ippAddresses;

}

@property (nonatomic,retain) NSMutableArray * ippAddresses;                 //@synthesize ippAddresses=_ippAddresses - In the implementation block
@property (assign,nonatomic) unsigned long long airPrintCount;              //@synthesize airPrintCount=_airPrintCount - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(unsigned long long)airPrintCount;
-(NSMutableArray *)ippAddresses;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)restrictions;
-(void)setAirPrintCount:(unsigned long long)arg1 ;
-(void)setIppAddresses:(NSMutableArray *)arg1 ;
@end

