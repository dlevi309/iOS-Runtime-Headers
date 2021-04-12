/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/_DASExtensionRunner.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMIDESBackgroundTask, NSString;

@interface PFLBackgroundRunner : HMFObject <_DASExtensionRunner, HMFLogging> {

	HMIDESBackgroundTask* _task;

}

@property (retain) HMIDESBackgroundTask * task;                     //@synthesize task=_task - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMIDESBackgroundTask *)task;
-(id)init;
-(BOOL)prepareForActivity:(id)arg1 ;
-(unsigned char)start;
-(void)setTask:(HMIDESBackgroundTask *)arg1 ;
-(void)stop;
-(id)runSession:(id)arg1 jsonResult:(id*)arg2 error:(id*)arg3 ;
-(BOOL)stringForKey:(id)arg1 info:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
-(id)getAttachmentFromRecipe:(id)arg1 name:(id)arg2 ;
-(BOOL)arrayForKey:(id)arg1 info:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
-(BOOL)numberForKey:(id)arg1 info:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
-(BOOL)dictionaryForKey:(id)arg1 info:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
@end

