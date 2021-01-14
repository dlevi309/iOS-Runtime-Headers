/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface CFPDDataBuffer : NSObject
+(id)newBufferFromCFData:(CFDataRef)arg1 ;
+(id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(BOOL)arg2 ;
+(id)newBufferFromPropertyList:(void*)arg1 ;
-(BOOL)validatePlist;
-(void)quicklyValidatePlistAndOnFailureInvokeBlock:(/*^block*/id)arg1 ;
-(CFDataRef)copyCFData;
-(BOOL)beginAccessing;
-(void*)copyPropertyListWithMutability:(unsigned long long)arg1 error:(_CFError*)arg2 ;
-(void*)bytes;
-(unsigned long long)length;
-(id)copyXPCData;
-(void)endAccessing;
-(BOOL)purgable;
@end

