/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <IconServices/ISIcon.h>

@protocol CUIKIconGenerator;
@class NSDateComponents, NSCalendar, ISIcon;

@interface CUIKIcon : ISIcon {

	NSDateComponents* _dateComponents;
	NSCalendar* _calendar;
	long long _format;
	id<CUIKIconGenerator> _iconGenerator;
	ISIcon* _isIcon;

}

@property (nonatomic,copy,readonly) NSDateComponents * dateComponents;              //@synthesize dateComponents=_dateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSCalendar * calendar;                          //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) long long format;                                    //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) id<CUIKIconGenerator> iconGenerator;                 //@synthesize iconGenerator=_iconGenerator - In the implementation block
@property (nonatomic,retain) ISIcon * isIcon;                                       //@synthesize isIcon=_isIcon - In the implementation block
-(NSCalendar *)calendar;
-(long long)format;
-(NSDateComponents *)dateComponents;
-(id)imageForImageDescriptor:(id)arg1 ;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 format:(long long)arg3 ;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 ;
-(id<CUIKIconGenerator>)iconGenerator;
-(void)setIsIcon:(ISIcon *)arg1 ;
-(ISIcon *)isIcon;
@end

