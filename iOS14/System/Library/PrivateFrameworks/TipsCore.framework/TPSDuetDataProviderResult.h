/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@class NSString, NSDate;

@interface TPSDuetDataProviderResult : NSObject {

	NSString* _identifier;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

