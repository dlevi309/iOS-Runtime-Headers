/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorSection.h>
@class NSString, NSArray, AVTAvatarAttributeEditorSectionOptions;


@protocol AVTAvatarAttributeEditorSection <NSObject>
@property (nonatomic,copy) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSArray * sectionItems; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) AVTAvatarAttributeEditorSectionOptions * options; 
@property (nonatomic,retain) id<AVTAvatarAttributeEditorSectionSupplementalPicker> supplementalPicker; 
@required
-(void)setLocalizedName:(id)arg1;
-(NSString *)localizedName;
-(AVTAvatarAttributeEditorSectionOptions *)options;
-(BOOL)shouldDisplayTitle;
-(BOOL)shouldDisplaySeparatorBeforeSection:(id)arg1;
-(NSArray *)sectionItems;
-(id<AVTAvatarAttributeEditorSectionSupplementalPicker>)supplementalPicker;
-(void)setSupplementalPicker:(id)arg1;
-(NSString *)identifier;

@end


@protocol AVTAvatarAttributeEditorSectionSupplementalPicker;
@class NSString, NSArray, AVTAvatarAttributeEditorSectionOptions;

@interface AVTAvatarAttributeEditorSection : NSObject <AVTAvatarAttributeEditorSection> {

	NSArray* _sectionItems;
	NSString* _localizedName;
	NSString* _identifier;
	id<AVTAvatarAttributeEditorSectionSupplementalPicker> _supplementalPicker;
	AVTAvatarAttributeEditorSectionOptions* _options;

}

@property (nonatomic,copy) NSString * localizedName;                                                                //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionItems;                                                         //@synthesize sectionItems=_sectionItems - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) AVTAvatarAttributeEditorSectionOptions * options;                                    //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) id<AVTAvatarAttributeEditorSectionSupplementalPicker> supplementalPicker;              //@synthesize supplementalPicker=_supplementalPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(id)initWithSectionItems:(id)arg1 localizedName:(id)arg2 identifier:(id)arg3 options:(id)arg4 ;
-(AVTAvatarAttributeEditorSectionOptions *)options;
-(NSString *)description;
-(BOOL)shouldDisplayTitle;
-(BOOL)shouldDisplaySeparatorBeforeSection:(id)arg1 ;
-(NSArray *)sectionItems;
-(id<AVTAvatarAttributeEditorSectionSupplementalPicker>)supplementalPicker;
-(void)setSupplementalPicker:(id<AVTAvatarAttributeEditorSectionSupplementalPicker>)arg1 ;
-(NSString *)identifier;
@end

