/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKComplicationTimelineEntry.h>
#import <libobjc.A.dylib/TLPreviewTimelineEntry.h>

@class NSArray, NSDate, NSString;

@interface CLKComplicationPreviewTimelineEntry : CLKComplicationTimelineEntry <TLPreviewTimelineEntry> {

	long long _previewFaceColor;
	NSArray* _errors;
	NSArray* _selectableRegions;

}

@property (assign,nonatomic) long long previewFaceColor;                                 //@synthesize previewFaceColor=_previewFaceColor - In the implementation block
@property (nonatomic,copy) NSArray * errors;                                             //@synthesize errors=_errors - In the implementation block
@property (nonatomic,copy) NSArray * selectableRegions;                                  //@synthesize selectableRegions=_selectableRegions - In the implementation block
@property (nonatomic,readonly) NSArray * tl_errors; 
@property (nonatomic,readonly) NSArray * tl_selectableRegions; 
@property (setter=tl_setEntryDate:,nonatomic,retain) NSDate * tl_entryDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)finalize;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSArray *)errors;
-(id)initWithCoder:(id)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)previewFaceColor;
-(NSArray *)tl_errors;
-(NSArray *)tl_selectableRegions;
-(void)setSelectableRegions:(NSArray *)arg1 ;
-(NSArray *)selectableRegions;
-(void)setPreviewFaceColor:(long long)arg1 ;
@end

