/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEFile : NSObject {

	shared_ptr<siri::dialogengine::File>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::File>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * paramsFilename; 
@property (retain) NSString * id; 
@property (retain) NSString * localeFilename; 
-(NSString *)id;
-(id)execute:(id)arg1 ;
-(shared_ptr<siri::dialogengine::File>*)This;
-(id)init;
-(void)setId:(NSString *)arg1 ;
-(id)getRoot;
-(id)getDialogs;
-(void)setThis:(shared_ptr<siri::dialogengine::File>*)arg1 ;
-(void)addPhrase:(id)arg1 ;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::File>*)arg1 ;
-(shared_ptr<siri::dialogengine::File>*)getSharedPtr;
-(NSString *)paramsFilename;
-(void)setParamsFilename:(NSString *)arg1 ;
-(NSString *)localeFilename;
-(void)setLocaleFilename:(NSString *)arg1 ;
-(id)getParameters;
-(id)getValidationErrors;
-(id)getValidationWarnings;
-(void)addCondition:(id)arg1 ;
@end

