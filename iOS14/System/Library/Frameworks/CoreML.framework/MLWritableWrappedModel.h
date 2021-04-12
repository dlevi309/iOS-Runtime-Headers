/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/MLWrappedModel.h>
#import <libobjc.A.dylib/MLWritable.h>

@class NSString;

@interface MLWritableWrappedModel : MLWrappedModel <MLWritable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapperAroundWritableModel:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
@end

