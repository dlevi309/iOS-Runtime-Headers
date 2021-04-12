/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLmLoader : NSObject {

	shared_ptr<quasar::LmLoader>* _loader;

}
+(void)initialize;
-(id)init;
-(void)invalidate;
-(id)fetchOrLoadModelWithDirectory:(id)arg1 recognizer:(id)arg2 ;
-(id)loadForRecognitionWithDirectory:(id)arg1 recognizer:(id)arg2 task:(id)arg3 applicationName:(id)arg4 ;
@end

