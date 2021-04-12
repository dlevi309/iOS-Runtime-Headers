/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorSection.h>
@class NSString, NSArray;


@protocol AVTAvatarAttributeEditorSection <NSObject>
@property (nonatomic,copy) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSArray * sectionItems; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,retain) id<AVTAvatarAttributeEditorHeaderPicker> headerAccessory; 
@required
-(NSString *)identifier;
-(NSString *)localizedName;
-(void)setLocalizedName:(id)arg1;
-(BOOL)shouldDisplayTitle;
-(BOOL)shouldDisplaySeparatorBeforeSection:(id)arg1;
-(NSArray *)sectionItems;
-(id<AVTAvatarAttributeEditorHeaderPicker>)headerAccessory;
-(void)setHeaderAccessory:(id)arg1;

@end


@protocol AVTAvatarAttributeEditorHeaderPicker;
@class NSString, NSArray;

@interface AVTAvatarAttributeEditorSection : NSObject <AVTAvatarAttributeEditorSection> {

	NSArray* _sectionItems;
	NSString* _localizedName;
	NSString* _identifier;
	id<AVTAvatarAttributeEditorHeaderPicker> _headerAccessory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * localizedName;                                                //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionItems;                                         //@synthesize sectionItems=_sectionItems - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id<AVTAvatarAttributeEditorHeaderPicker> headerAccessory;              //@synthesize headerAccessory=_headerAccessory - In the implementation block
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)localizedName;
-(void)setLocalizedName:(NSString *)arg1 ;
-(BOOL)shouldDisplayTitle;
-(BOOL)shouldDisplaySeparatorBeforeSection:(id)arg1 ;
-(NSArray *)sectionItems;
-(id<AVTAvatarAttributeEditorHeaderPicker>)headerAccessory;
-(void)setHeaderAccessory:(id<AVTAvatarAttributeEditorHeaderPicker>)arg1 ;
-(id)initWithSectionItems:(id)arg1 localizedName:(id)arg2 identifier:(id)arg3 ;
@end

