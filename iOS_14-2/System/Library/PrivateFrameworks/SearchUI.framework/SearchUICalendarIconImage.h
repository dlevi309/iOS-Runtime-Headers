/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIAppIconImage.h>

@class NSDate;

@interface SearchUICalendarIconImage : SearchUIAppIconImage {

	BOOL _isCurrentDate;
	NSDate* _date;

}

@property (assign,nonatomic) BOOL isCurrentDate;              //@synthesize isCurrentDate=_isCurrentDate - In the implementation block
@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
-(id)loadImage;
-(BOOL)isCurrentDate;
-(id)initWithCurrentDateAndVariant:(unsigned long long)arg1 ;
-(id)initWithDate:(id)arg1 variant:(unsigned long long)arg2 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)invalidateAppIcon;
-(unsigned long long)hash;
-(BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)arg1 ;
-(NSDate *)date;
-(void)setIsCurrentDate:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

