/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTPresetResourcesProviding.h>

@class NSArray, NSString, AVTCoreModelGroup;

@interface AVTAvatarAttributeEditorCategory : NSObject <AVTPresetResourcesProviding> {

	NSArray* _sections;
	NSString* _localizedName;
	AVTCoreModelGroup* _modelGroup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * sections;                     //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;               //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) AVTCoreModelGroup * modelGroup;              //@synthesize modelGroup=_modelGroup - In the implementation block
-(NSString *)description;
-(NSString *)localizedName;
-(NSArray *)sections;
-(id)initWithSections:(id)arg1 localizedName:(id)arg2 modelGroup:(id)arg3 ;
-(AVTCoreModelGroup *)modelGroup;
-(id)representedAVTPresetResources;
@end

