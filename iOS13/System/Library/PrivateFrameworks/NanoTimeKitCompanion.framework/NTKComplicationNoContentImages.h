/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage;

@interface NTKComplicationNoContentImages : NSObject <NSSecureCoding> {

	UIImage* _modularSmallImage;
	UIImage* _utilitarianSmallImage;
	UIImage* _circularSmallImage;
	UIImage* _extraLargeImage;

}

@property (nonatomic,retain) UIImage * modularSmallImage;                  //@synthesize modularSmallImage=_modularSmallImage - In the implementation block
@property (nonatomic,retain) UIImage * utilitarianSmallImage;              //@synthesize utilitarianSmallImage=_utilitarianSmallImage - In the implementation block
@property (nonatomic,retain) UIImage * circularSmallImage;                 //@synthesize circularSmallImage=_circularSmallImage - In the implementation block
@property (nonatomic,retain) UIImage * extraLargeImage;                    //@synthesize extraLargeImage=_extraLargeImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)modularSmallImage;
-(void)setModularSmallImage:(UIImage *)arg1 ;
-(UIImage *)utilitarianSmallImage;
-(void)setUtilitarianSmallImage:(UIImage *)arg1 ;
-(UIImage *)circularSmallImage;
-(void)setCircularSmallImage:(UIImage *)arg1 ;
-(UIImage *)extraLargeImage;
-(void)setExtraLargeImage:(UIImage *)arg1 ;
@end

