/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTPresetResourcesProviding.h>

@class NSArray, NSString, NSDictionary, AVTCoreModelGroup;

@interface AVTAvatarAttributeEditorCategory : NSObject <AVTPresetResourcesProviding> {

	NSArray* _sections;
	NSString* _localizedName;
	NSDictionary* _symbolNames;
	AVTCoreModelGroup* _modelGroup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * symbolNames;              //@synthesize symbolNames=_symbolNames - In the implementation block
@property (nonatomic,readonly) AVTCoreModelGroup * modelGroup;               //@synthesize modelGroup=_modelGroup - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sections;                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;                //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) id symbolNameProvider; 
-(NSString *)localizedName;
-(NSArray *)sections;
-(NSDictionary *)symbolNames;
-(id)initWithSections:(id)arg1 localizedName:(id)arg2 modelGroup:(id)arg3 symbolNames:(id)arg4 ;
-(id)symbolNameProvider;
-(AVTCoreModelGroup *)modelGroup;
-(NSString *)description;
-(id)representedAVTPresetResources;
@end

