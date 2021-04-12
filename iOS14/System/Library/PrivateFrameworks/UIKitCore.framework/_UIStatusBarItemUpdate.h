/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UIStatusBarData, _UIStatusBarStyleAttributes, NSDictionary;

@interface _UIStatusBarItemUpdate : NSObject <NSCopying> {

	BOOL _enabilityChanged;
	BOOL _enabled;
	BOOL _dataChanged;
	BOOL _styleAttributesChanged;
	_UIStatusBarData* _data;
	_UIStatusBarStyleAttributes* _styleAttributes;
	NSDictionary* _placementInfo;

}

@property (assign,nonatomic) BOOL enabilityChanged;                                      //@synthesize enabilityChanged=_enabilityChanged - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL dataChanged;                                           //@synthesize dataChanged=_dataChanged - In the implementation block
@property (nonatomic,retain) _UIStatusBarData * data;                                    //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL styleAttributesChanged;                                //@synthesize styleAttributesChanged=_styleAttributesChanged - In the implementation block
@property (nonatomic,retain) _UIStatusBarStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * placementInfo;                               //@synthesize placementInfo=_placementInfo - In the implementation block
-(void)setStyleAttributes:(_UIStatusBarStyleAttributes *)arg1 ;
-(BOOL)enabled;
-(_UIStatusBarStyleAttributes *)styleAttributes;
-(void)setStyleAttributesChanged:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSDictionary *)placementInfo;
-(void)setData:(_UIStatusBarData *)arg1 ;
-(void)setEnabilityChanged:(BOOL)arg1 ;
-(BOOL)dataChanged;
-(id)description;
-(_UIStatusBarData *)data;
-(BOOL)enabilityChanged;
-(BOOL)styleAttributesChanged;
-(void)setPlacementInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDataChanged:(BOOL)arg1 ;
@end

