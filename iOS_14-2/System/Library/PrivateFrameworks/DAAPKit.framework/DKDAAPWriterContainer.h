/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

