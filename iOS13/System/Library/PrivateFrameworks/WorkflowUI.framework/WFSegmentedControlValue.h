/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class NSString, UIImage;

@interface WFSegmentedControlValue : NSObject {

	NSString* _displayName;
	UIImage* _image;
	id _representedObject;

}

@property (nonatomic,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) UIImage * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) id representedObject;                //@synthesize representedObject=_representedObject - In the implementation block
+(id)valueWithDisplayName:(id)arg1 ;
+(id)valueWithDisplayName:(id)arg1 representedObject:(id)arg2 ;
+(id)valueWithImage:(id)arg1 ;
+(id)valueWithImage:(id)arg1 representedObject:(id)arg2 ;
-(NSString *)displayName;
-(UIImage *)image;
-(id)representedObject;
-(id)initWithDisplayName:(id)arg1 image:(id)arg2 representedObject:(id)arg3 ;
@end

