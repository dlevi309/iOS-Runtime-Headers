/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface VCSleepAction : NSObject <NSSecureCoding, NSCopying> {

	BOOL _goodForSleep;
	NSString* _bundleIdentifierForDisplay;
	NSString* _title;
	NSString* _subtitle;
	NSString* _identifier;
	unsigned long long _shortcutAvailability;
	NSString* _workflowActionIdentifier;
	NSDictionary* _serializedParameters;
	NSString* _sourceAppBundleIdentifier;

}

@property (nonatomic,copy) NSString * workflowActionIdentifier;                         //@synthesize workflowActionIdentifier=_workflowActionIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * serializedParameters;                         //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (nonatomic,copy) NSString * sourceAppBundleIdentifier;                        //@synthesize sourceAppBundleIdentifier=_sourceAppBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifierForDisplay;              //@synthesize bundleIdentifierForDisplay=_bundleIdentifierForDisplay - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (getter=isGoodForSleep,nonatomic,readonly) BOOL goodForSleep;                 //@synthesize goodForSleep=_goodForSleep - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long shortcutAvailability;                 //@synthesize shortcutAvailability=_shortcutAvailability - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)openAppActionWithBundleIdentifier:(id)arg1 ;
+(id)identifierForWorkflowActionIdentifier:(id)arg1 serializedParameters:(id)arg2 ;
+(id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)arg1 ;
-(NSString *)sourceAppBundleIdentifier;
-(void)setSourceAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 workflowActionIdentifier:(id)arg2 sourceAppBundleIdentifier:(id)arg3 bundleIdentifierForDisplay:(id)arg4 title:(id)arg5 subtitle:(id)arg6 serializedParameters:(id)arg7 shortcutAvailability:(unsigned long long)arg8 ;
-(NSString *)bundleIdentifierForDisplay;
-(BOOL)isGoodForSleep;
-(NSString *)workflowActionIdentifier;
-(void)setWorkflowActionIdentifier:(NSString *)arg1 ;
-(NSDictionary *)serializedParameters;
-(void)setSerializedParameters:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)shortcutAvailability;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

