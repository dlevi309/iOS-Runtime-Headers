/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPPackageDataWriter <NSObject>
@required
-(CGDataConsumerRef)newCGDataConsumerAtRelativePath:(id)arg1;
-(BOOL)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(BOOL)arg3 error:(id*)arg4;
-(BOOL)flushPendingWritesReturningError:(id*)arg1;

@end

