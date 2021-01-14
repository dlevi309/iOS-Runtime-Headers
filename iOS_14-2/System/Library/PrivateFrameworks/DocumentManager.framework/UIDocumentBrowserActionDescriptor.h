/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/


@class NSString, NSPredicate;

@interface UIDocumentBrowserActionDescriptor : NSObject {

	BOOL _displayInline;
	NSString* _uiActionProviderIdentifier;
	NSString* _fileProviderIdentifier;
	NSString* _identifier;
	NSString* _displayName;
	NSPredicate* _predicate;

}

@property (nonatomic,readonly) NSString * uiActionProviderIdentifier;              //@synthesize uiActionProviderIdentifier=_uiActionProviderIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * fileProviderIdentifier;                  //@synthesize fileProviderIdentifier=_fileProviderIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) BOOL displayInline;                                 //@synthesize displayInline=_displayInline - In the implementation block
-(NSPredicate *)predicate;
-(NSString *)fileProviderIdentifier;
-(NSString *)identifier;
-(NSString *)displayName;
-(id)initWithIdentifier:(id)arg1 uiActionProviderIdentifier:(id)arg2 fileProviderIdentifier:(id)arg3 displayName:(id)arg4 predicate:(id)arg5 displayInline:(BOOL)arg6 ;
-(BOOL)displayInline;
-(NSString *)uiActionProviderIdentifier;
@end

