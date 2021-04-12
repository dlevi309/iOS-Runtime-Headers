/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLmModel : NSObject {

	shared_ptr<quasar::LmModel>* _model;

}

@property (nonatomic,readonly) shared_ptr<quasar::LmModel>* model;              //@synthesize model=_model - In the implementation block
+(void)initialize;
+(void)removeWithDirectory:(id)arg1 ;
-(id)metrics;
-(shared_ptr<quasar::LmModel>*)model;
-(id)handle;
-(void)setWeight:(float)arg1 ;
-(id)_initWithModel:(shared_ptr<quasar::LmModel>*)arg1 ;
-(float)weight;
-(id)initWithConfiguration:(id)arg1 ;
-(double)age;
-(id)initWithConfiguration:(id)arg1 root:(id)arg2 ;
-(BOOL)trainWithData:(id)arg1 ;
-(id)initFromDirectory:(id)arg1 ;
-(BOOL)trainWithData:(id)arg1 shouldStop:(/*^block*/id)arg2 ;
-(BOOL)writeToDirectory:(id)arg1 ;
@end

