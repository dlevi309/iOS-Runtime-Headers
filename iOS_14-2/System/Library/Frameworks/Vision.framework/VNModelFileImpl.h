/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNModelFile.h>

@class NSString;

@interface VNModelFileImpl : NSObject <VNModelFile> {

	const mapped_model_file* m_impl;

}

@property (nonatomic,readonly) const void* baseAddress; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain) NSString * resourcePath; 
@property (nonatomic,readonly) _sFILE* ptrFile; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(const void*)baseAddress;
-(unsigned long long)length;
-(void)advise:(long long)arg1 ;
-(_sFILE*)ptrFile;
-(id)initWithMappedModel:(const mapped_model_file*)arg1 ;
@end

