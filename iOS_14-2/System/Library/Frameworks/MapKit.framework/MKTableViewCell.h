/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(CGRect)_separatorFrame;
-(void)set_mapkit_separatorStyleOverride:(long long)arg1 ;
-(void)set_mapkit_forceSeparatorFrameToCGRectZero:(BOOL)arg1 ;
-(void)_mapkit_disableSeparatorStyleOverride;
-(BOOL)_mapkit_forceSeparatorFrameToCGRectZero;
-(long long)_mapkit_separatorStyleOverride;
@end

