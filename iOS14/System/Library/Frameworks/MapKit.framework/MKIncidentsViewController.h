/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/_MKTableViewController.h>

@class NSArray, NSString;

@interface MKIncidentsViewController : _MKTableViewController {

	NSArray* _sections;
	NSArray* _transitIncidents;
	NSArray* _restrictionIncidents;
	NSArray* _notices;
	NSString* _incidentsTitle;

}

@property (nonatomic,copy) NSArray * transitIncidents;                  //@synthesize transitIncidents=_transitIncidents - In the implementation block
@property (nonatomic,copy) NSArray * restrictionIncidents;              //@synthesize restrictionIncidents=_restrictionIncidents - In the implementation block
@property (nonatomic,copy) NSArray * notices;                           //@synthesize notices=_notices - In the implementation block
@property (nonatomic,readonly) NSString * incidentsTitle;               //@synthesize incidentsTitle=_incidentsTitle - In the implementation block
-(void)_updateTitle;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)init;
-(NSArray *)transitIncidents;
-(unsigned long long)_incidentsCount;
-(void)reloadDataSource;
-(void)_compileSections;
-(long long)_sectionForSectionIndex:(long long)arg1 ;
-(id)_restrictionCellForIndex:(long long)arg1 ;
-(id)_transitCellForIndex:(long long)arg1 inSection:(long long)arg2 ;
-(id)_noticeCellForIndex:(long long)arg1 ;
-(id)extendedDetailCell;
-(id)detailCellInSection:(long long)arg1 ;
-(unsigned long long)_transitIncidentsCount;
-(NSArray *)restrictionIncidents;
-(id)_cellForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)initWithRestrictionIncidents:(id)arg1 ;
-(void)setRestrictionIncidents:(NSArray *)arg1 ;
-(long long)_transitIncidentIndexForRow:(long long)arg1 section:(long long)arg2 ;
-(NSString *)incidentsTitle;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithTransitIncidents:(id)arg1 ;
-(NSArray *)notices;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)infoCardThemeChanged;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTransitIncidents:(NSArray *)arg1 ;
-(void)_localeDidChange;
-(void)dealloc;
-(void)setNotices:(NSArray *)arg1 ;
@end

