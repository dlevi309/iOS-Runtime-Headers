/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@interface MKTableViewCell : UITableViewCell {

	BOOL __mapkit_separatorStyleOverrideEnabled;
	BOOL __mapkit_forceSeparatorFrameToCGRectZero;
	long long __mapkit_separatorStyleOverride;

}

@property (assign,nonatomic) BOOL _mapkit_forceSeparatorFrameToCGRectZero;              //@synthesize _mapkit_forceSeparatorFrameToCGRectZero=__mapkit_forceSeparatorFrameToCGRectZero - In the implementation block
@property (assign,nonatomic) long long _mapkit_separatorStyleOverride;                  //@synthesize _mapkit_separatorStyleOverride=__mapkit_separatorStyleOverride - In the implementation block
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(CGRect)_separatorFrame;
-(void)set_mapkit_forceSeparatorFrameToCGRectZero:(BOOL)arg1 ;
-(void)set_mapkit_separatorStyleOverride:(long long)arg1 ;
-(void)_mapkit_disableSeparatorStyleOverride;
-(BOOL)_mapkit_forceSeparatorFrameToCGRectZero;
-(long long)_mapkit_separatorStyleOverride;
@end

