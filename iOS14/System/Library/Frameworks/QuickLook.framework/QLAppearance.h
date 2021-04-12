/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface QLAppearance : NSObject <NSSecureCoding> {

	double _topInset;
	double _bottomInset;
	unsigned long long _presentationMode;
	UIEdgeInsets _peripheryInsets;

}

@property (readonly) double topInset;                                  //@synthesize topInset=_topInset - In the implementation block
@property (readonly) double bottomInset;                               //@synthesize bottomInset=_bottomInset - In the implementation block
@property (readonly) unsigned long long presentationMode;              //@synthesize presentationMode=_presentationMode - In the implementation block
@property (readonly) UIEdgeInsets peripheryInsets;                     //@synthesize peripheryInsets=_peripheryInsets - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)topInset;
-(void)encodeWithCoder:(id)arg1 ;
-(UIEdgeInsets)peripheryInsets;
-(id)initWithTopInset:(double)arg1 bottomInset:(double)arg2 presentationMode:(unsigned long long)arg3 peripheryInsets:(UIEdgeInsets)arg4 ;
-(id)description;
-(double)bottomInset;
-(unsigned long long)presentationMode;
-(id)initWithCoder:(id)arg1 ;
@end

