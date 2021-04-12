/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoKit.framework/ChronoKit
*/

#import <Timeline/TLTimelineBlobEntry.h>
#import <libobjc.A.dylib/TLPreviewTimelineEntry.h>

@class NSArray;

@interface ChronoKit.WidgetPreviewTimelineEntry : TLTimelineBlobEntry <TLPreviewTimelineEntry> {

	 tl_errors;
	 tl_selectableRegions;
	 backgroundColor;

}

@property (copy,nonatomic) NSArray * tl_errors; 
@property (copy,nonatomic) NSArray * tl_selectableRegions; 
@property (readonly,nonatomic) long long hash; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBlob:(id)arg1 atDate:(id)arg2 ;
-(NSArray *)tl_errors;
-(void)setTl_errors:(NSArray *)arg1 ;
-(NSArray *)tl_selectableRegions;
-(void)setTl_selectableRegions:(NSArray *)arg1 ;
@end

