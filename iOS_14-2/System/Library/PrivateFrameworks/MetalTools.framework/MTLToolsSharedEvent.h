/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsEvent.h>
#import <libobjc.A.dylib/MTLSharedEvent.h>

@class NSString;

@interface MTLToolsSharedEvent : MTLToolsEvent <MTLSharedEvent>

@property (assign) unsigned long long signaledValue; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)signaledValue;
-(id)newSharedEventHandle;
-(void)setSignaledValue:(unsigned long long)arg1 ;
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

