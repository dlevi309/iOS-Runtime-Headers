/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXTangierDragItemProvider.h>

@protocol SXTangierDragItemProvider <NSObject>
@required
-(id)dragItemForSmartField:(id)arg1 interaction:(id)arg2 session:(id)arg3;

@end


@class NSString;

@interface SXTangierDragItemProvider : NSObject <SXTangierDragItemProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)session:(id)arg1 containsURL:(id)arg2 ;
-(id)dragItemForSmartField:(id)arg1 interaction:(id)arg2 session:(id)arg3 ;
@end

