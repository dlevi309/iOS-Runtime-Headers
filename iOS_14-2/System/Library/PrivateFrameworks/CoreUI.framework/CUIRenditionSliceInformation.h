/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CUIRenditionSliceInformation : NSObject <NSCopying> {

	long long _renditionType;
	double _boundaries[4];
	CGRect _destinationRect;
	SCD_Struct_CS11 _edgeInsets;

}

@property (nonatomic,readonly) long long renditionType;                 //@synthesize renditionType=_renditionType - In the implementation block
@property (nonatomic,readonly) CGRect destinationRect;                  //@synthesize destinationRect=_destinationRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CS11 edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(long long)renditionType;
-(SCD_Struct_CS11)edgeInsets;
-(CGRect)destinationRect;
-(double)positionOfSliceBoundary:(unsigned long long)arg1 ;
-(CGSize)_bottomRightCapSize;
-(id)description;
-(id)initWithRenditionType:(long long)arg1 destinationRect:(CGRect)arg2 topLeftInset:(CGSize)arg3 bottomRightInset:(CGSize)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSliceInformation:(id)arg1 destinationRect:(CGRect)arg2 ;
-(CGSize)_topLeftCapSize;
@end

