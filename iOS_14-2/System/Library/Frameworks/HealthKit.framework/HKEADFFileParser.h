/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSData;

@interface HKEADFFileParser : NSObject {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
-(id)initWithData:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(id)payloadInRange:(NSRange)arg1 ;
-(void)_enumerateHeadersWithHandler:(/*^block*/id)arg1 ;
-(void)enumerateChannelsWithHandler:(/*^block*/id)arg1 ;
-(id)newBuilderWithStartDate:(id)arg1 ;
@end

