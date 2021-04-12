/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <libobjc.A.dylib/QLItemTransformerProtocol.h>

@class NSString;

@interface QLTextItemTransformer : NSObject <QLItemTransformerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedOutputClasses;
-(id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)transformedContentsFromData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)wrapperFromData:(id)arg1 encoding:(unsigned long long)arg2 mimeType:(id)arg3 error:(id*)arg4 ;
@end

