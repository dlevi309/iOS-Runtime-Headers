/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWRenderListParameterListProvider.h>

@class NSString;

@interface BWRenderListParameters : NSObject <BWRenderListParameterListProvider> {

	BWRenderListParameterList* _parameterList;

}

@property (nonatomic,readonly) BWRenderListParameterList* parameterList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)initWithParameterList:(BWRenderListParameterList*)arg1 ;
-(id)init;
-(BWRenderListParameterNode*)firstNode;
-(BWRenderListParameterList*)parameterList;
-(void)dealloc;
@end

