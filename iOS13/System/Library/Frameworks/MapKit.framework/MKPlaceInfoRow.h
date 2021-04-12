/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)type;
-(BOOL)enable;
-(void)setEnable:(BOOL)arg1 ;
-(MKPlaceSectionRowView *)rowView;
-(BOOL)showIcon;
-(void)setShowIcon:(BOOL)arg1 ;
@end

