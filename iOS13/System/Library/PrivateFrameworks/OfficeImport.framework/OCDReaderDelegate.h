/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OCDReaderDelegate <NSObject>
@required
-(void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;
-(void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(BOOL)arg4;
-(void)readerDidEndDocument:(id)arg1;

@end

