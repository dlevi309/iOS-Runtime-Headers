/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>
#import <libobjc.A.dylib/MKTransitItemIncidentView.h>

@class MKTransitItemIncidentView, NSString;

@interface MKTransitItemIncidentCell : MKCustomSeparatorTableViewCell <MKTransitItemIncidentView> {

	MKTransitItemIncidentView* _incidentView;

}

@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) BOOL padBottom; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)position;
-(void)_configureViews;
-(void)setPosition:(long long)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(BOOL)padBottom;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(void)setPadBottom:(BOOL)arg1 ;
-(void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(BOOL)arg4 inSiri:(BOOL)arg5 ;
-(void)_updateIncidentViewBottomOffset;
-(void)setLeadingSeparatorInset:(double)arg1 ;
-(void)setTrailingSeparatorInset:(double)arg1 ;
@end

