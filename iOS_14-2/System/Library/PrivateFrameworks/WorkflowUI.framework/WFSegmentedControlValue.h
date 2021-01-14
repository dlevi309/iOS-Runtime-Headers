/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)valueWithDisplayName:(id)arg1 representedObject:(id)arg2 ;
+(id)valueWithDisplayName:(id)arg1 ;
+(id)valueWithImage:(id)arg1 ;
+(id)valueWithImage:(id)arg1 representedObject:(id)arg2 ;
-(UIImage *)image;
-(NSString *)displayName;
-(id)representedObject;
-(id)initWithDisplayName:(id)arg1 image:(id)arg2 representedObject:(id)arg3 ;
@end

