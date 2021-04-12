/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSArray *)moments;
-(id)initWithMoments:(id)arg1 ;
@end

