/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OIProgressiveReaderDelegate
@optional
-(void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;
-(void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(BOOL)arg4;
-(void)readerDidEndDocument:(id)arg1;

@end

