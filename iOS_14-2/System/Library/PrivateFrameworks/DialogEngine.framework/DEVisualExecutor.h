/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString, NSDictionary, DEContext;

@interface DEVisualExecutor : NSObject {

	BOOL _debug;
	BOOL _test;
	BOOL _resetState;
	NSString* _templateDir;
	NSString* _visualCatId;
	NSString* _platform;
	NSDictionary* _parameters;
	NSDictionary* _globalParameters;
	DEContext* _context;

}

@property (nonatomic,retain) NSString * templateDir;                       //@synthesize templateDir=_templateDir - In the implementation block
@property (nonatomic,retain) NSString * visualCatId;                       //@synthesize visualCatId=_visualCatId - In the implementation block
@property (nonatomic,retain) NSString * platform;                          //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSDictionary * globalParameters;              //@synthesize globalParameters=_globalParameters - In the implementation block
@property (nonatomic,retain) DEContext * context;                          //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL debug;                                   //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) BOOL test;                                    //@synthesize test=_test - In the implementation block
@property (assign,nonatomic) BOOL resetState;                              //@synthesize resetState=_resetState - In the implementation block
-(id)execute;
-(BOOL)test;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSString *)platform;
-(id)init;
-(void)setPlatform:(NSString *)arg1 ;
-(void)setDebug:(BOOL)arg1 ;
-(DEContext *)context;
-(BOOL)resetState;
-(NSDictionary *)globalParameters;
-(void)setTemplateDir:(NSString *)arg1 ;
-(void)setTest:(BOOL)arg1 ;
-(void)setResetState:(BOOL)arg1 ;
-(NSString *)templateDir;
-(NSString *)visualCatId;
-(Context*)getContext;
-(id)consumeContext:(Context*)arg1 ;
-(void)setVisualCatId:(NSString *)arg1 ;
-(void)setGlobalParameters:(NSDictionary *)arg1 ;
-(BOOL)debug;
-(void)setContext:(DEContext *)arg1 ;
@end

