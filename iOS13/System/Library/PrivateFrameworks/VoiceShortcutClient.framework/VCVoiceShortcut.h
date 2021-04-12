/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/INVCVoiceShortcut.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INShortcut, INImage, NSDate, WFWorkflow;

@interface VCVoiceShortcut : NSObject <INVCVoiceShortcut, NSSecureCoding> {

	NSString* _identifier;
	NSString* _phrase;
	NSString* _shortcutName;
	NSString* _shortcutDescription;
	NSString* _associatedAppBundleIdentifier;
	INImage* _keyImage;
	INShortcut* _shortcut;
	NSDate* _dateCreated;
	NSDate* _dateLastModified;
	unsigned long long _cachedBlacklistStatus;

}

@property (nonatomic,readonly) NSDate * dateCreated;                                       //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,readonly) NSDate * dateLastModified;                                  //@synthesize dateLastModified=_dateLastModified - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenModified; 
@property (assign,nonatomic) unsigned long long cachedBlacklistStatus;                     //@synthesize cachedBlacklistStatus=_cachedBlacklistStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * phrase;                                     //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortcutName;                               //@synthesize shortcutName=_shortcutName - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortcutDescription;                        //@synthesize shortcutDescription=_shortcutDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedAppBundleIdentifier;              //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) INImage * keyImage;                                    //@synthesize keyImage=_keyImage - In the implementation block
@property (nonatomic,readonly) INShortcut * shortcut;                                      //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(WFWorkflow *)workflow;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(INImage *)keyImage;
-(NSDate *)dateCreated;
-(INShortcut *)shortcut;
-(NSString *)shortcutName;
-(NSString *)associatedAppBundleIdentifier;
-(NSString *)phrase;
-(WFWorkflow *)workflow;
-(NSDate *)dateLastModified;
-(id)initWithIdentifier:(id)arg1 phrase:(id)arg2 shortcutName:(id)arg3 shortcutDescription:(id)arg4 associatedAppBundleIdentifier:(id)arg5 dateCreated:(id)arg6 dateLastModified:(id)arg7 shortcut:(id)arg8 keyImageData:(id)arg9 error:(id*)arg10 ;
-(BOOL)hasBeenModified;
-(NSString *)shortcutDescription;
-(unsigned long long)cachedBlacklistStatus;
-(void)setCachedBlacklistStatus:(unsigned long long)arg1 ;
@end

