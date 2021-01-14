/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <libobjc.A.dylib/DEWriter.h>

@class NSMutableData;

@interface DEDataWriter : NSObject <DEWriter> {

	NSMutableData* _data;

}

@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(void)close;
-(void)setData:(NSMutableData *)arg1 ;
-(NSMutableData *)data;
-(void)writeData:(id)arg1 ;
@end

