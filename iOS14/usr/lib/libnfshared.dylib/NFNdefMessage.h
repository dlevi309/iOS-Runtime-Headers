/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

@class NSArray;


@protocol NFNdefMessage <NSObject>
@property (nonatomic,readonly) NSArray * records; 
@required
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2;
-(NSArray *)records;
-(id)decode;
-(id)asData;
-(void)addRecord:(id)arg1;
-(id)initWithNDEFMessage:(id)arg1;
-(void)addRecordArray:(id)arg1;

@end

