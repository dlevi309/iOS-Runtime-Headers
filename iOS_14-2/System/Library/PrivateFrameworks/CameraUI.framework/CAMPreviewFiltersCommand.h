/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class NSArray;

@interface CAMPreviewFiltersCommand : CAMCaptureCommand {

	NSArray* _filters;

}

@property (nonatomic,readonly) NSArray * filters;              //@synthesize filters=_filters - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(NSArray *)filters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSubcommands:(id)arg1 ;
-(id)initWithFilters:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

