/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString;

@interface DEContext : NSObject {

	void* _This;

}

@property (assign) void* This;                           //@synthesize This=_This - In the implementation block
@property (readonly) NSString * loadStatus; 
@property (readonly) NSString * locale; 
+(id)globalParameters;
-(id)init;
-(void)dealloc;
-(NSString *)locale;
-(NSString *)loadStatus;
-(void)setFile:(id)arg1 ;
-(void)setThis:(void*)arg1 ;
-(void*)This;
-(BOOL)load:(id)arg1 locale:(id)arg2 ;
-(void)addVariable:(id)arg1 ;
-(id)findVariable:(id)arg1 ;
-(id)getFile;
-(void)setTemplateDir:(id)arg1 ;
@end

