/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString, NSDictionary, DEContext, DEDistribution;

@interface DEExecutor : NSObject {

	BOOL _debug;
	BOOL _test;
	BOOL _resetState;
	BOOL _multiuser;
	BOOL _grounding;
	BOOL _enableUpdates;
	NSString* _templateDir;
	NSString* _catId;
	NSString* _locale;
	NSDictionary* _parameters;
	NSDictionary* _globalParameters;
	NSString* _pluginName;
	DEContext* _context;
	/*^block*/id _callback;
	DEDistribution* _distribution;
	NSString* _voiceGender;

}

@property (nonatomic,retain) NSString * templateDir;                       //@synthesize templateDir=_templateDir - In the implementation block
@property (nonatomic,retain) NSString * catId;                             //@synthesize catId=_catId - In the implementation block
@property (nonatomic,retain) NSString * locale;                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSDictionary * globalParameters;              //@synthesize globalParameters=_globalParameters - In the implementation block
@property (nonatomic,retain) NSString * pluginName;                        //@synthesize pluginName=_pluginName - In the implementation block
@property (nonatomic,retain) DEContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id callback;                                    //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) DEDistribution * distribution;                //@synthesize distribution=_distribution - In the implementation block
@property (assign,nonatomic) BOOL debug;                                   //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) BOOL test;                                    //@synthesize test=_test - In the implementation block
@property (assign,nonatomic) BOOL resetState;                              //@synthesize resetState=_resetState - In the implementation block
@property (assign,nonatomic) BOOL multiuser;                               //@synthesize multiuser=_multiuser - In the implementation block
@property (assign,nonatomic) BOOL grounding;                               //@synthesize grounding=_grounding - In the implementation block
@property (assign,nonatomic) BOOL enableUpdates;                           //@synthesize enableUpdates=_enableUpdates - In the implementation block
@property (nonatomic,retain) NSString * voiceGender;                       //@synthesize voiceGender=_voiceGender - In the implementation block
+(/*^block*/id)prepareCallback:(/*^block*/id)arg1 forContext:(Context*)arg2 ;
+(void)executeWithJson:(id)arg1 paramsString:(id)arg2 localeString:(id)arg3 callback:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
+(void)executeWithJson:(id)arg1 callback:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)executeWithJson:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(BOOL)enableUpdates;
-(DEContext *)context;
-(NSDictionary *)parameters;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setContext:(DEContext *)arg1 ;
-(BOOL)debug;
-(void)setDebug:(BOOL)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setDistribution:(DEDistribution *)arg1 ;
-(DEDistribution *)distribution;
-(BOOL)test;
-(BOOL)resetState;
-(NSString *)pluginName;
-(NSDictionary *)globalParameters;
-(void)setTemplateDir:(NSString *)arg1 ;
-(NSString *)templateDir;
-(void)setTest:(BOOL)arg1 ;
-(void)setResetState:(BOOL)arg1 ;
-(void)setMultiuser:(BOOL)arg1 ;
-(void)setGrounding:(BOOL)arg1 ;
-(NSString *)catId;
-(BOOL)multiuser;
-(BOOL)grounding;
-(NSString *)voiceGender;
-(id)executeWithParams:(id)arg1 locale:(id)arg2 ;
-(void)executeWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)executeWithParams:(id)arg1 locale:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setCatId:(NSString *)arg1 ;
-(void)setGlobalParameters:(NSDictionary *)arg1 ;
-(void)setPluginName:(NSString *)arg1 ;
-(void)setEnableUpdates:(BOOL)arg1 ;
-(void)setVoiceGender:(NSString *)arg1 ;
@end

