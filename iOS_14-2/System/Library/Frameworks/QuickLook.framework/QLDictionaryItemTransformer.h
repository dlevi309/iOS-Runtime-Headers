/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <libobjc.A.dylib/QLItemTransformerProtocol.h>

@class NSString;

@interface QLDictionaryItemTransformer : NSObject <QLItemTransformerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedOutputClasses;
-(id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)transformedContentsFromData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
@end

