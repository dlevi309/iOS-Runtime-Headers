/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILAConfigurationHistory.h>
#import <UIKitCore/_UIALAPropertySource.h>

@class NSSet, NSString;

@interface _UIALAConfigurationHistory : _UILAConfigurationHistory <_UIALAPropertySource> {

	BOOL _hasEstablishedAlignmentValues;
	BOOL _inAlignmentLayoutUpdateSection;
	unsigned long long _alignment;

}

@property (assign,nonatomic) BOOL hasEstablishedAlignmentValues;                                                       //@synthesize hasEstablishedAlignmentValues=_hasEstablishedAlignmentValues - In the implementation block
@property (assign,getter=isInAlignmentLayoutUpdateSection,nonatomic) BOOL inAlignmentLayoutUpdateSection;              //@synthesize inAlignmentLayoutUpdateSection=_inAlignmentLayoutUpdateSection - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                                                             //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (nonatomic,readonly) NSSet * invalidBaselineConstraints; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHasEstablishedAlignmentValues:(BOOL)arg1 ;
-(unsigned long long)alignment;
-(BOOL)isInAlignmentLayoutUpdateSection;
-(void)setAlignment:(unsigned long long)arg1 ;
-(BOOL)hasEstablishedAlignmentValues;
-(void)setInAlignmentLayoutUpdateSection:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

