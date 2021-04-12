/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DAAPKit.framework/DAAPKit
*/


@class NSMutableData;

@interface DKDAAPWriterContainer : NSObject {

	unsigned _code;
	NSMutableData* _childData;

}

@property (nonatomic,readonly) unsigned code;              //@synthesize code=_code - In the implementation block
@property (retain) NSMutableData * childData;              //@synthesize childData=_childData - In the implementation block
-(unsigned)code;
-(id)initWithCode:(unsigned)arg1 ;
-(NSMutableData *)childData;
-(id)formattedOutputData;
-(void)setChildData:(NSMutableData *)arg1 ;
@end

