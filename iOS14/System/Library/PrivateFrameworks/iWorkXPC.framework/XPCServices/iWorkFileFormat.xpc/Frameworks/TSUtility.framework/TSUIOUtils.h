/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSUIOUtils : NSObject
+(CGDataProviderRef)newCGDataProviderForInputStream:(id)arg1 ;
+(void)readAllFromChannel:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(CGDataProviderRef)newCGDataProviderForReadChannel:(id)arg1 ;
@end

