/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


@protocol SASerializable;
@interface SAObjectListEntry : NSObject {

	id<SASerializable> _instance;
	unsigned long long _size;

}

@property (retain) id<SASerializable> instance;              //@synthesize instance=_instance - In the implementation block
@property (assign) unsigned long long size;                  //@synthesize size=_size - In the implementation block
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(id<SASerializable>)instance;
-(void)setInstance:(id<SASerializable>)arg1 ;
@end

