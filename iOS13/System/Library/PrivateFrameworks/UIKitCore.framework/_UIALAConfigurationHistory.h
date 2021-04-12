/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILAConfigurationHistory.h>
#import <UIKitCore/_UIALAPropertySource.h>

@class NSString, NSSet;

@interface _UIALAConfigurationHistory : _UILAConfigurationHistory <_UIALAPropertySource> {

	BOOL _hasEstablishedAlignmentValues;
	BOOL _inAlignmentLayoutUpdateSection;
	unsigned long long _alignment;

}

@property (assign,nonatomic) BOOL hasEstablishedAlignmentValues;                                                       //@synthesize hasEstablishedAlignmentValues=_hasEstablishedAlignmentValues - In the implementation block
@property (assign,getter=isInAlignmentLayoutUpdateSection,nonatomic) BOOL inAlignmentLayoutUpdateSection;              //@synthesize inAlignmentLayoutUpdateSection=_inAlignmentLayoutUpdateSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (nonatomic,readonly) NSSet * invalidBaselineConstraints; 
@property (assign,nonatomic) unsigned long long alignment;                                                             //@synthesize alignment=_alignment - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)alignment;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setHasEstablishedAlignmentValues:(BOOL)arg1 ;
-(void)setInAlignmentLayoutUpdateSection:(BOOL)arg1 ;
-(BOOL)hasEstablishedAlignmentValues;
-(BOOL)isInAlignmentLayoutUpdateSection;
@end

