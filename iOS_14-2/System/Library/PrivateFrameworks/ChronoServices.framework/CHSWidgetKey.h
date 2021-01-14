/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CHSWidget, CHSWidgetMetrics;

@interface CHSWidgetKey : NSObject <NSCopying, NSSecureCoding> {

	CHSWidget* _widget;
	CHSWidgetMetrics* _metrics;

}

@property (nonatomic,readonly) CHSWidget * widget;                      //@synthesize widget=_widget - In the implementation block
@property (nonatomic,readonly) CHSWidgetMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
+(BOOL)supportsSecureCoding;
-(CHSWidgetMetrics *)metrics;
-(CHSWidget *)widget;
-(id)initWithWidget:(id)arg1 metrics:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

