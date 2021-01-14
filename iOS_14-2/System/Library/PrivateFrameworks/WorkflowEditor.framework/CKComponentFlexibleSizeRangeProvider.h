/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <libobjc.A.dylib/CKComponentSizeRangeProviding.h>

@class NSString;

@interface CKComponentFlexibleSizeRangeProvider : NSObject <CKComponentSizeRangeProviding> {

	long long _flexibility;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerWithFlexibility:(long long)arg1 ;
-(id)init;
-(CKSizeRange)sizeRangeForBoundingSize:(CGSize)arg1 ;
-(id)initWithFlexibility:(long long)arg1 ;
@end

