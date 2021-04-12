/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MultitouchSupport.framework/MultitouchSupport
*/


@protocol MTBinaryFilterProtocol <NSObject>
@property (nonatomic,readonly) unsigned maxFrameSize; 
@optional
-(id)initWithInfo:(id)arg1;
-(id)initWithInfo:(id)arg1 getProperty:(/*^block*/id)arg2;

@required
-(unsigned)maxFrameSize;
-(void)reset;
-(void)filterFrame:(char**)arg1 size:(unsigned*)arg2 maxSize:(unsigned*)arg3 extraFrame:(/*^block*/id)arg4;

@end

