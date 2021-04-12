/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEFile : NSObject {

	shared_ptr<siri::dialogengine::File>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::File>* This;              //@synthesize This=_This - In the implementation block
@property (assign) NSString * paramsFilename; 
@property (assign) NSString * id; 
@property (assign) NSString * localeFilename; 
-(id)init;
-(id)execute:(id)arg1 ;
-(void)addCondition:(id)arg1 ;
-(NSString *)id;
-(void)setId:(NSString *)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::File>*)arg1 ;
-(shared_ptr<siri::dialogengine::File>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::File>*)arg1 ;
-(shared_ptr<siri::dialogengine::File>*)getSharedPtr;
-(id)getRoot;
-(NSString *)paramsFilename;
-(void)setParamsFilename:(NSString *)arg1 ;
-(NSString *)localeFilename;
-(void)setLocaleFilename:(NSString *)arg1 ;
-(id)getParameters;
-(void)addPhrase:(id)arg1 ;
-(id)getValidationErrors;
-(id)getValidationWarnings;
@end

