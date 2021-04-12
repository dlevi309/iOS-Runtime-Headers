/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSData;

@interface HKEADFFileParser : NSObject {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)_enumerateHeadersWithHandler:(/*^block*/id)arg1 ;
-(id)payloadInRange:(NSRange)arg1 ;
-(void)enumerateChannelsWithHandler:(/*^block*/id)arg1 ;
-(id)newBuilderWithStartDate:(id)arg1 ;
@end

