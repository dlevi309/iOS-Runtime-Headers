/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

@class NSArray;


@protocol NFNdefMessage <NSObject>
@property (nonatomic,readonly) NSArray * records; 
@required
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2;
-(id)asData;
-(NSArray *)records;
-(void)addRecord:(id)arg1;
-(id)decode;
-(id)initWithNDEFMessage:(id)arg1;
-(void)addRecordArray:(id)arg1;

@end

