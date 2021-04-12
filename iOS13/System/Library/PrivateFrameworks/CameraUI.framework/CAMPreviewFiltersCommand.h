/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class NSArray;

@interface CAMPreviewFiltersCommand : CAMCaptureCommand {

	NSArray* _filters;

}

@property (nonatomic,readonly) NSArray * filters;              //@synthesize filters=_filters - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)filters;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithSubcommands:(id)arg1 ;
-(id)initWithFilters:(id)arg1 ;
@end

