/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor;

@interface NTKExplorerDotColorOptions : NSObject <NSCopying, NSSecureCoding> {

	UIColor* _connectedDotColor;
	UIColor* _connectedDotBackgroundColor;
	UIColor* _noServiceDotColor;

}

@property (nonatomic,retain) UIColor * connectedDotColor;                        //@synthesize connectedDotColor=_connectedDotColor - In the implementation block
@property (nonatomic,retain) UIColor * connectedDotBackgroundColor;              //@synthesize connectedDotBackgroundColor=_connectedDotBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * noServiceDotColor;                        //@synthesize noServiceDotColor=_noServiceDotColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)noServiceDotColor;
-(UIColor *)connectedDotColor;
-(UIColor *)connectedDotBackgroundColor;
-(void)setConnectedDotColor:(UIColor *)arg1 ;
-(void)setConnectedDotBackgroundColor:(UIColor *)arg1 ;
-(void)setNoServiceDotColor:(UIColor *)arg1 ;
@end

