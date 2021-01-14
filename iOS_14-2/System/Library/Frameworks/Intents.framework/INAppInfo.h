/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSSet, NSData;

@interface INAppInfo : NSObject <NSSecureCoding> {

	BOOL _supportsMultiwindow;
	NSString* _applicationIdentifier;
	NSArray* _counterpartIdentifiers;
	NSString* _developmentRegion;
	NSSet* _supportedActions;
	NSSet* _supportedIntents;
	NSSet* _supportedIntentsByApp;
	NSSet* _supportedActionsByExtensions;
	NSSet* _actionsRestrictedWhileLocked;
	NSSet* _actionsRestrictedWhileProtectedDataUnavailable;
	NSSet* _supportedMediaCategories;
	NSSet* _definedIntents;
	NSString* _companionApplicationIdentifier;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * companionApplicationIdentifier;                           //@synthesize companionApplicationIdentifier=_companionApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * counterpartIdentifiers;                                    //@synthesize counterpartIdentifiers=_counterpartIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * developmentRegion;                                        //@synthesize developmentRegion=_developmentRegion - In the implementation block
@property (nonatomic,copy) NSSet * supportedActions;                                            //@synthesize supportedActions=_supportedActions - In the implementation block
@property (nonatomic,copy) NSSet * supportedIntents;                                            //@synthesize supportedIntents=_supportedIntents - In the implementation block
@property (nonatomic,copy) NSSet * supportedIntentsByApp;                                       //@synthesize supportedIntentsByApp=_supportedIntentsByApp - In the implementation block
@property (nonatomic,copy) NSSet * supportedActionsByExtensions;                                //@synthesize supportedActionsByExtensions=_supportedActionsByExtensions - In the implementation block
@property (nonatomic,copy) NSSet * actionsRestrictedWhileLocked;                                //@synthesize actionsRestrictedWhileLocked=_actionsRestrictedWhileLocked - In the implementation block
@property (nonatomic,copy) NSSet * actionsRestrictedWhileProtectedDataUnavailable;              //@synthesize actionsRestrictedWhileProtectedDataUnavailable=_actionsRestrictedWhileProtectedDataUnavailable - In the implementation block
@property (nonatomic,copy) NSSet * supportedMediaCategories;                                    //@synthesize supportedMediaCategories=_supportedMediaCategories - In the implementation block
@property (nonatomic,copy) NSSet * definedIntents;                                              //@synthesize definedIntents=_definedIntents - In the implementation block
@property (assign,nonatomic) BOOL supportsMultiwindow;                                          //@synthesize supportsMultiwindow=_supportsMultiwindow - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
+(id)appInfoWithData:(id)arg1 error:(id*)arg2 ;
+(id)_appInfoWithApplicationRecord:(id)arg1 applicationExtensionRecords:(id)arg2 userActivityTypes:(id)arg3 ;
+(id)appInfoWithIntent:(id)arg1 ;
+(id)appInfoWithApplicationRecord:(id)arg1 ;
+(id)appInfoWithAppProxy:(id)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(id)init;
-(NSArray *)counterpartIdentifiers;
-(void)setSupportsMultiwindow:(BOOL)arg1 ;
-(void)setSupportedActions:(NSSet *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)supportsMultiwindow;
-(void)setDefinedIntents:(NSSet *)arg1 ;
-(void)setCounterpartIdentifiers:(NSArray *)arg1 ;
-(NSString *)applicationIdentifier;
-(void)setSupportedActionsByExtensions:(NSSet *)arg1 ;
-(NSSet *)supportedActionsByExtensions;
-(NSData *)data;
-(void)setSupportedMediaCategories:(NSSet *)arg1 ;
-(NSSet *)definedIntents;
-(NSString *)companionApplicationIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setActionsRestrictedWhileLocked:(NSSet *)arg1 ;
-(NSSet *)actionsRestrictedWhileProtectedDataUnavailable;
-(NSString *)developmentRegion;
-(void)setCompanionApplicationIdentifier:(NSString *)arg1 ;
-(void)setActionsRestrictedWhileProtectedDataUnavailable:(NSSet *)arg1 ;
-(NSSet *)supportedIntentsByApp;
-(NSSet *)supportedIntents;
-(void)setSupportedIntentsByApp:(NSSet *)arg1 ;
-(void)setDevelopmentRegion:(NSString *)arg1 ;
-(NSSet *)supportedActions;
-(void)setSupportedIntents:(NSSet *)arg1 ;
-(NSSet *)actionsRestrictedWhileLocked;
-(NSSet *)supportedMediaCategories;
@end

