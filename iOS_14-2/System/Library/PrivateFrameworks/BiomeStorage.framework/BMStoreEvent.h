/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol BMStoreData;
@class BMFrame;

@interface BMStoreEvent : NSObject <NSSecureCoding> {

	id<BMStoreData> _eventBody;
	double _timestamp;
	unsigned char _error;
	BMFrame* _frame;
	Class _dataType;

}

@property (nonatomic,readonly) BMFrame * frame;                        //@synthesize frame=_frame - In the implementation block
@property (nonatomic,retain) Class dataType;                           //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) id<BMStoreData> eventBody; 
@property (nonatomic,readonly) unsigned char error;                    //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithEventType:(Class)arg1 eventData:(id)arg2 dataVersion:(unsigned)arg3 ;
-(Class)dataType;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)init;
-(double)timestamp;
-(void)setDataType:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BMFrame *)frame;
-(unsigned char)error;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id<BMStoreData>)eventBody;
-(id)initWithFrame:(id)arg1 error:(unsigned char)arg2 ;
-(id)initWithEventBody:(id)arg1 timestamp:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

