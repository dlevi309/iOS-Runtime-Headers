/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface CFPDDataBuffer : NSObject
+(id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(BOOL)arg2 ;
+(id)newBufferFromPropertyList:(void*)arg1 ;
+(id)newBufferFromCFData:(CFDataRef)arg1 ;
-(unsigned long long)length;
-(void*)bytes;
-(BOOL)purgable;
-(void)endAccessing;
-(BOOL)beginAccessing;
-(BOOL)validatePlist;
-(void)quicklyValidatePlistAndOnFailureInvokeBlock:(/*^block*/id)arg1 ;
-(void*)copyPropertyListWithMutability:(unsigned long long)arg1 error:(_CFError*)arg2 ;
-(CFDataRef)copyCFData;
-(id)copyXPCData;
@end

