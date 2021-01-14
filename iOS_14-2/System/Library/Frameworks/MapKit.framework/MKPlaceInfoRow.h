/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class MKPlaceSectionRowView;

@interface MKPlaceInfoRow : NSObject {

	BOOL _enable;
	BOOL _showIcon;
	unsigned long long _type;
	MKPlaceSectionRowView* _rowView;

}

@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) MKPlaceSectionRowView * rowView;              //@synthesize rowView=_rowView - In the implementation block
@property (assign,nonatomic) BOOL enable;                                    //@synthesize enable=_enable - In the implementation block
@property (assign,nonatomic) BOOL showIcon;                                  //@synthesize showIcon=_showIcon - In the implementation block
+(id)infoRow:(id)arg1 ofType:(unsigned long long)arg2 ;
-(BOOL)enable;
-(BOOL)showIcon;
-(MKPlaceSectionRowView *)rowView;
-(unsigned long long)type;
-(void)setShowIcon:(BOOL)arg1 ;
-(void)setEnable:(BOOL)arg1 ;
@end

