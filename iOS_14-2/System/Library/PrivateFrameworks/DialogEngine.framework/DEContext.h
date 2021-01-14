/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEContext : NSObject {

	void* _This;

}

@property (assign) void* This;                           //@synthesize This=_This - In the implementation block
@property (readonly) NSString * loadStatus; 
@property (readonly) NSString * locale; 
+(id)globalParameters;
-(NSString *)locale;
-(void*)This;
-(void)setFile:(id)arg1 ;
-(id)init;
-(void)setThis:(void*)arg1 ;
-(id)getFile;
-(id)initWithPtr:(Context*)arg1 ;
-(BOOL)load:(id)arg1 locale:(id)arg2 ;
-(void)addVariable:(id)arg1 ;
-(id)findVariable:(id)arg1 ;
-(void)setTemplateDir:(id)arg1 ;
-(void)registerMorphunDataPathFor:(id)arg1 path:(id)arg2 ;
-(NSString *)loadStatus;
-(void)dealloc;
@end

