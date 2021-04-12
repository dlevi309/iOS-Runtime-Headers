/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSBundle, NSString, NSDictionary, NSMutableDictionary, UIStoryboardSegueTemplate;

@interface UIStoryboard : NSObject {

	NSBundle* bundle;
	NSString* storyboardFileName;
	NSDictionary* identifierToNibNameMap;
	NSDictionary* identifierToExternalStoryboardReferenceMap;
	NSString* designatedEntryPointIdentifier;
	NSString* designatedMenuIdentifier;
	NSMutableDictionary* identifierToUINibMap;
	UIStoryboardSegueTemplate* ___currentStoryboardSegueTemplate;
	/*^block*/id ___currentStoryboardSegueCreator;
	id ___currentSender;

}

@property (nonatomic,readonly) NSString * storyboardFileName; 
@property (nonatomic,readonly) NSDictionary * identifierToNibNameMap; 
@property (nonatomic,readonly) NSDictionary * identifierToExternalStoryboardReferenceMap; 
@property (nonatomic,readonly) NSString * designatedEntryPointIdentifier; 
@property (nonatomic,readonly) NSString * designatedMenuIdentifier; 
@property (nonatomic,readonly) NSMutableDictionary * identifierToUINibMap; 
@property (assign,nonatomic) UIStoryboardSegueTemplate * __currentStoryboardSegueTemplate;              //@synthesize __currentStoryboardSegueTemplate=___currentStoryboardSegueTemplate - In the implementation block
@property (assign,nonatomic) id __currentStoryboardSegueCreator;                                        //@synthesize __currentStoryboardSegueCreator=___currentStoryboardSegueCreator - In the implementation block
@property (assign,nonatomic) id __currentSender;                                                        //@synthesize __currentSender=___currentSender - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle; 
@property (readonly) NSString * name; 
+(id)storyboardWithName:(id)arg1 bundle:(id)arg2 ;
-(NSBundle *)bundle;
-(id)__reallyInstantiateViewControllerWithIdentifier:(id)arg1 creator:(/*^block*/id)arg2 storyboardSegueTemplate:(id)arg3 sender:(id)arg4 ;
-(id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 identifierToExternalStoryboardReferenceMap:(id)arg4 designatedEntryPointIdentifier:(id)arg5 designatedMenuIdentifier:(id)arg6 ;
-(id)_instantiateViewControllerReferencedByPlaceholderWithIdentifier:(id)arg1 storyboardSegueTemplate:(id)arg2 sender:(id)arg3 ;
-(id)_instantiateViewControllerWithIdentifier:(id)arg1 creator:(/*^block*/id)arg2 storyboardSegueTemplate:(id)arg3 sender:(id)arg4 ;
-(id)_instantiateInitialViewControllerWithCreator:(/*^block*/id)arg1 storyboardSegueTemplate:(id)arg2 sender:(id)arg3 ;
-(id)instantiateViewControllerWithIdentifier:(id)arg1 ;
-(NSString *)name;
-(id)instantiateInitialViewController;
-(id)_instantiateInitialMenu;
-(NSString *)storyboardFileName;
-(NSDictionary *)identifierToNibNameMap;
-(void)set__currentSender:(id)arg1 ;
-(NSDictionary *)identifierToExternalStoryboardReferenceMap;
-(id)__currentSender;
-(id)referencedStoryboardForExternalReferenceInfo:(id)arg1 ;
-(NSString *)designatedMenuIdentifier;
-(id)nibForViewControllerWithIdentifier:(id)arg1 ;
-(UIStoryboardSegueTemplate *)__currentStoryboardSegueTemplate;
-(id)__currentStoryboardSegueCreator;
-(void)set__currentStoryboardSegueCreator:(id)arg1 ;
-(void)set__currentStoryboardSegueTemplate:(UIStoryboardSegueTemplate *)arg1 ;
-(NSString *)designatedEntryPointIdentifier;
-(BOOL)containsNibNamed:(id)arg1 ;
-(id)instantiateInitialViewControllerWithCreator:(/*^block*/id)arg1 ;
-(id)instantiateViewControllerWithIdentifier:(id)arg1 creator:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)identifierToUINibMap;
-(id)nibForStoryboardNibNamed:(id)arg1 ;
-(id)identifierForStringsFile;
-(void)dealloc;
@end

