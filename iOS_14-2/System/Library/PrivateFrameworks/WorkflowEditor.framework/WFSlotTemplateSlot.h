/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
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
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(BOOL)isInvalid;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setInvalid:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setIdentifier:(WFSlotIdentifier *)arg1 ;
-(BOOL)isEnabled;
-(WFSlotIdentifier *)identifier;
-(BOOL)isPopulated;
-(void)setLocalizedPlaceholder:(NSString *)arg1 ;
-(NSAttributedString *)contentAttributedString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedPlaceholder;
-(BOOL)isEqual:(id)arg1 ;
-(long long)userInputInsertionIndex;
-(void)populateWithIcon:(id)arg1 string:(id)arg2 ;
-(void)populateWithVariable:(id)arg1 ;
-(void)populateWithString:(id)arg1 ;
-(void)setPrefersNoWrapping:(BOOL)arg1 ;
-(void)setContentAttributedString:(NSAttributedString *)arg1 ;
-(BOOL)standaloneTextAttachment;
-(BOOL)prefersNoWrapping;
-(void)setStandaloneTextAttachment:(BOOL)arg1 ;
-(void)populateWithVariableString:(id)arg1 askVariableName:(id)arg2 ;
-(id)initWithLocalizedName:(id)arg1 localizedPlaceholder:(id)arg2 identifier:(id)arg3 ;
-(void)setUserInputInsertionIndex:(long long)arg1 ;
@end

