/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <libobjc.A.dylib/WFSlotTemplateContent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFSlotIdentifier, NSString, NSAttributedString;

@interface WFSlotTemplateSlot : NSObject <WFSlotTemplateContent, NSCopying> {

	BOOL _enabled;
	BOOL _invalid;
	BOOL _prefersNoWrapping;
	BOOL _standaloneTextAttachment;
	WFSlotIdentifier* _identifier;
	NSString* _localizedName;
	NSString* _localizedPlaceholder;
	NSAttributedString* _contentAttributedString;
	long long _userInputInsertionIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) WFSlotIdentifier * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                                  //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * localizedPlaceholder;                           //@synthesize localizedPlaceholder=_localizedPlaceholder - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isInvalid,nonatomic) BOOL invalid;                           //@synthesize invalid=_invalid - In the implementation block
@property (getter=isPopulated,nonatomic,readonly) BOOL populated; 
@property (nonatomic,copy) NSAttributedString * contentAttributedString;              //@synthesize contentAttributedString=_contentAttributedString - In the implementation block
@property (assign,nonatomic) BOOL prefersNoWrapping;                                  //@synthesize prefersNoWrapping=_prefersNoWrapping - In the implementation block
@property (assign,nonatomic) BOOL standaloneTextAttachment;                           //@synthesize standaloneTextAttachment=_standaloneTextAttachment - In the implementation block
@property (assign,nonatomic) long long userInputInsertionIndex;                       //@synthesize userInputInsertionIndex=_userInputInsertionIndex - In the implementation block
+(id)slotWithLocalizedName:(id)arg1 localizedPlaceholder:(id)arg2 key:(id)arg3 ;
+(id)addingSlotWithKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(WFSlotIdentifier *)identifier;
-(void)setIdentifier:(WFSlotIdentifier *)arg1 ;
-(NSString *)localizedName;
-(BOOL)isEnabled;
-(void)setLocalizedName:(NSString *)arg1 ;
-(BOOL)isInvalid;
-(void)setInvalid:(BOOL)arg1 ;
-(NSString *)localizedPlaceholder;
-(NSAttributedString *)contentAttributedString;
-(void)setLocalizedPlaceholder:(NSString *)arg1 ;
-(BOOL)isPopulated;
-(long long)userInputInsertionIndex;
-(id)initWithLocalizedName:(id)arg1 localizedPlaceholder:(id)arg2 identifier:(id)arg3 ;
-(void)setContentAttributedString:(NSAttributedString *)arg1 ;
-(BOOL)prefersNoWrapping;
-(void)setPrefersNoWrapping:(BOOL)arg1 ;
-(BOOL)standaloneTextAttachment;
-(void)setStandaloneTextAttachment:(BOOL)arg1 ;
-(void)setUserInputInsertionIndex:(long long)arg1 ;
-(void)populateWithIcon:(id)arg1 string:(id)arg2 ;
-(void)populateWithString:(id)arg1 ;
-(void)populateWithVariable:(id)arg1 ;
-(void)populateWithVariableString:(id)arg1 askVariableName:(id)arg2 ;
@end

