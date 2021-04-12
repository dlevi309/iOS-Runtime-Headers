/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKObjectChange.h>

@interface EKCalendarChange : EKObjectChange {

	BOOL _titleChanged;
	BOOL _colorChanged;
	BOOL _orderChanged;

}

@property (nonatomic,readonly) BOOL titleChanged;              //@synthesize titleChanged=_titleChanged - In the implementation block
@property (nonatomic,readonly) BOOL colorChanged;              //@synthesize colorChanged=_colorChanged - In the implementation block
@property (nonatomic,readonly) BOOL orderChanged;              //@synthesize orderChanged=_orderChanged - In the implementation block
+(int)entityType;
+(void)fetchCalendarChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchCalendarChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(BOOL)colorChanged;
-(BOOL)orderChanged;
-(BOOL)titleChanged;
-(id)initWithChangeProperties:(id)arg1 ;
@end

