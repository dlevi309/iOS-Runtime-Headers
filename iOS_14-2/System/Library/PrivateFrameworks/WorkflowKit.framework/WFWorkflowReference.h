/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <VoiceShortcutClient/WFWorkflowDescriptor.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString, WFWorkflowIcon, NSDate, NSUserActivity, WFImage;

@interface WFWorkflowReference : WFWorkflowDescriptor <WFNaming> {

	BOOL _isDeleted;
	BOOL _hiddenFromLibraryAndSync;
	NSString* _subtitle;
	NSString* _actionsDescription;
	unsigned long long _actionCount;
	WFWorkflowIcon* _icon;
	NSDate* _modificationDate;

}

@property (readonly,nonatomic) NSString * displayName; 
@property (readonly,nonatomic) NSString * displaySubtitle; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (nonatomic,readonly) NSUserActivity * userActivityForViewing; 
@property (nonatomic,copy,readonly) NSString * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionsDescription;                   //@synthesize actionsDescription=_actionsDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long actionCount;                       //@synthesize actionCount=_actionCount - In the implementation block
@property (nonatomic,copy,readonly) WFWorkflowIcon * icon;                           //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) BOOL isDeleted;                                       //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,readonly) BOOL hiddenFromLibraryAndSync;                        //@synthesize hiddenFromLibraryAndSync=_hiddenFromLibraryAndSync - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                            //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) NSString * attributionTitle; 
@property (nonatomic,readonly) WFImage * attributionIcon; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)spotlightHash;
-(id)searchableItemRepresentationWithIconDrawerContext:(id)arg1 ;
-(NSString *)displaySubtitle;
-(NSString *)displayName;
-(NSDate *)modificationDate;
-(WFWorkflowIcon *)icon;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)wfName;
-(BOOL)isDeleted;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)actionCount;
-(BOOL)hiddenFromLibraryAndSync;
-(NSString *)attributionTitle;
-(id)attributionIconWithSize:(CGSize)arg1 scale:(double)arg2 rounded:(BOOL)arg3 ;
-(NSString *)actionsDescription;
-(id)speakableString;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 color:(long long)arg3 glyphCharacter:(unsigned short)arg4 associatedAppBundleIdentifier:(id)arg5 subtitle:(id)arg6 actionsDescription:(id)arg7 actionCount:(unsigned long long)arg8 isDeleted:(BOOL)arg9 hiddenFromLibraryAndSync:(BOOL)arg10 modificationDate:(id)arg11 ;
-(id)externalURLForRunningWithSource:(id)arg1 ;
-(id)externalURLForViewing;
-(WFImage *)attributionIcon;
-(void)donateRunInteraction;
-(NSUserActivity *)userActivityForViewing;
@end

