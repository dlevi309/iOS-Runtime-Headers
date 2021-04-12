/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NTKUpNextComplicationConfiguration : NSObject <NSSecureCoding> {

	long long _family;

}

@property (nonatomic,readonly) long long family;              //@synthesize family=_family - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)bezelConfigurationWithMaskImage:(id)arg1 radius:(double)arg2 ;
+(id)graphicRectangularConfiguration;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)family;
-(id)initWithFamily:(long long)arg1 ;
-(id)_newPickerView;
@end

