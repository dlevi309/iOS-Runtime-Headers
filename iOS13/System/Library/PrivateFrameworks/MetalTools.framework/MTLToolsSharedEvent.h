/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsEvent.h>
#import <libobjc.A.dylib/MTLSharedEvent.h>

@class NSString;

@interface MTLToolsSharedEvent : MTLToolsEvent <MTLSharedEvent>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (assign) unsigned long long signaledValue; 
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)setSignaledValue:(unsigned long long)arg1 ;
-(unsigned long long)signaledValue;
-(id)newSharedEventHandle;
@end

