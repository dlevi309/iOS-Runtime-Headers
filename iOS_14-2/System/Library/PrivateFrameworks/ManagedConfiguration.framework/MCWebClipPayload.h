/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSURL, NSString, NSData, NSNumber;

@interface MCWebClipPayload : MCPayload {

	NSURL* _URL;
	NSString* _label;
	NSData* _iconData;
	BOOL _isRemovable;
	BOOL _precomposed;
	BOOL _fullScreen;
	BOOL _ignoreManifestScope;
	NSString* _contentMode;
	NSString* _targetApplicationBundleIdentifier;
	NSString* _savedIdentifier;
	NSNumber* _isRemovableNum;
	NSNumber* _precomposedNum;
	NSNumber* _fullScreenNum;
	NSNumber* _ignoreManifestScopeNum;

}

@property (nonatomic,readonly) NSNumber * isRemovableNum;                                 //@synthesize isRemovableNum=_isRemovableNum - In the implementation block
@property (nonatomic,readonly) NSNumber * precomposedNum;                                 //@synthesize precomposedNum=_precomposedNum - In the implementation block
@property (nonatomic,readonly) NSNumber * fullScreenNum;                                  //@synthesize fullScreenNum=_fullScreenNum - In the implementation block
@property (nonatomic,readonly) NSNumber * ignoreManifestScopeNum;                         //@synthesize ignoreManifestScopeNum=_ignoreManifestScopeNum - In the implementation block
@property (nonatomic,retain,readonly) NSURL * URL;                                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain,readonly) NSString * label;                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain,readonly) NSData * iconData;                                  //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,readonly) BOOL isRemovable;                                          //@synthesize isRemovable=_isRemovable - In the implementation block
@property (nonatomic,readonly) BOOL precomposed;                                          //@synthesize precomposed=_precomposed - In the implementation block
@property (nonatomic,readonly) BOOL fullScreen;                                           //@synthesize fullScreen=_fullScreen - In the implementation block
@property (nonatomic,readonly) BOOL ignoreManifestScope;                                  //@synthesize ignoreManifestScope=_ignoreManifestScope - In the implementation block
@property (nonatomic,readonly) NSString * contentMode;                                    //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,readonly) NSString * targetApplicationBundleIdentifier;              //@synthesize targetApplicationBundleIdentifier=_targetApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * savedIdentifier;                                  //@synthesize savedIdentifier=_savedIdentifier - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSString *)contentMode;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(BOOL)isRemovable;
-(BOOL)precomposed;
-(NSData *)iconData;
-(NSNumber *)fullScreenNum;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSString *)savedIdentifier;
-(NSNumber *)isRemovableNum;
-(void)setSavedIdentifier:(NSString *)arg1 ;
-(NSString *)targetApplicationBundleIdentifier;
-(NSNumber *)precomposedNum;
-(NSNumber *)ignoreManifestScopeNum;
-(BOOL)fullScreen;
-(id)verboseDescription;
-(BOOL)ignoreManifestScope;
-(NSURL *)URL;
-(NSString *)label;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

