/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@class NSMutableData;

@interface ASCHasher : NSObject {

	BOOL _isFinalized;
	NSMutableData* _buffer;

}

@property (nonatomic,readonly) NSMutableData * buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) BOOL isFinalized;                      //@synthesize isFinalized=_isFinalized - In the implementation block
+(unsigned long long)executionSeed;
-(BOOL)isFinalized;
-(id)init;
-(NSMutableData *)buffer;
-(void)combineBool:(BOOL)arg1 ;
-(void)combineInteger:(long long)arg1 ;
-(void)combineDouble:(double)arg1 ;
-(unsigned long long)finalizeHash;
-(void)combineObject:(id)arg1 ;
-(void)combineBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)setIsFinalized:(BOOL)arg1 ;
-(void)combineUnsignedInteger:(unsigned long long)arg1 ;
@end

