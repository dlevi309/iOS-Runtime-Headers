/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNModelFile.h>

@class NSString;

@interface VNModelFileImpl : NSObject <VNModelFile> {

	const mapped_model_file* m_impl;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) const void* baseAddress; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain) NSString * resourcePath; 
-(unsigned long long)length;
-(const void*)baseAddress;
-(void)advise:(long long)arg1 ;
-(id)initWithMappedModel:(const mapped_model_file*)arg1 ;
@end

