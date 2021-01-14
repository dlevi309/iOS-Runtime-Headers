/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATXHomeScreenSessionMetadata : NSObject <NSSecureCoding> {

	BOOL _isWidgetInTodayView;
	NSString* _widgetUniqueId;
	NSString* _widgetBundleId;

}

@property (nonatomic,retain) NSString * widgetUniqueId;              //@synthesize widgetUniqueId=_widgetUniqueId - In the implementation block
@property (nonatomic,retain) NSString * widgetBundleId;              //@synthesize widgetBundleId=_widgetBundleId - In the implementation block
@property (assign,nonatomic) BOOL isWidgetInTodayView;               //@synthesize isWidgetInTodayView=_isWidgetInTodayView - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setWidgetUniqueId:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)widgetBundleId;
-(NSString *)widgetUniqueId;
-(void)setIsWidgetInTodayView:(BOOL)arg1 ;
-(BOOL)isWidgetInTodayView;
-(void)setWidgetBundleId:(NSString *)arg1 ;
-(id)initWithWidgetUniqueId:(id)arg1 widgetBundleId:(id)arg2 isWidgetInTodayView:(BOOL)arg3 ;
-(BOOL)isEqualToATXHomeScreenSessionMetadata:(id)arg1 ;
@end

