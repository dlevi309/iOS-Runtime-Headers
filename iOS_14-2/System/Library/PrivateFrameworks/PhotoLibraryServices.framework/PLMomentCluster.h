/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray, NSDate;

@interface PLMomentCluster : NSObject {

	NSArray* _moments;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _localStartDate;
	NSDate* _localEndDate;

}

@property (nonatomic,copy,readonly) NSArray * moments;               //@synthesize moments=_moments - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate;              //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                //@synthesize localEndDate=_localEndDate - In the implementation block
-(NSArray *)moments;
-(NSDate *)endDate;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSDate *)startDate;
-(id)initWithMoments:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

