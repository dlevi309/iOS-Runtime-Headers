/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIcon.h>

@class SBIcon, NSArray;

@interface SBPlaceholderIcon : SBIcon {

	id _nodeIdentifier;
	SBIcon* _icon;
	NSArray* _icons;

}

@property (nonatomic,readonly) SBIcon * referencedIcon; 
@property (nonatomic,copy,readonly) NSArray * referencedIcons; 
+(id)grabbedIconPlaceholderForIcon:(id)arg1 ;
+(id)grabbedIconPlaceholderForIcons:(id)arg1 ;
+(id)placeholderNodeIdentifierForIcon:(id)arg1 ;
+(id)placeholderNodeIdentifierForIconNodeIdentifier:(id)arg1 ;
+(BOOL)hasIconImage;
+(id)placeholderForIcon:(id)arg1 ;
-(BOOL)isPlaceholder;
-(id)children;
-(id)nodeIdentifier;
-(id)automationID;
-(NSArray *)referencedIcons;
-(SBIcon *)referencedIcon;
-(BOOL)referencesIcon:(id)arg1 ;
-(BOOL)referencesIconWithIdentifier:(id)arg1 ;
-(id)genericIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(BOOL)isUninstallSupported;
-(id)_initWithNodeIdentifier:(id)arg1 icon:(id)arg2 ;
-(id)_initWithNodeIdentifier:(id)arg1 icons:(id)arg2 ;
-(id)gridCellImage;
@end

