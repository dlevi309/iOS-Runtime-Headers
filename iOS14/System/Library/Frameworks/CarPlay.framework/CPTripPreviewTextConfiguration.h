/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CPTripPreviewTextConfiguration : NSObject <NSSecureCoding> {

	NSString* _startButtonTitle;
	NSString* _additionalRoutesButtonTitle;
	NSString* _overviewButtonTitle;

}

@property (nonatomic,copy,readonly) NSString * startButtonTitle;                         //@synthesize startButtonTitle=_startButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * additionalRoutesButtonTitle;              //@synthesize additionalRoutesButtonTitle=_additionalRoutesButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * overviewButtonTitle;                      //@synthesize overviewButtonTitle=_overviewButtonTitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)startButtonTitle;
-(NSString *)additionalRoutesButtonTitle;
-(NSString *)overviewButtonTitle;
-(id)initWithStartButtonTitle:(id)arg1 additionalRoutesButtonTitle:(id)arg2 overviewButtonTitle:(id)arg3 ;
@end

