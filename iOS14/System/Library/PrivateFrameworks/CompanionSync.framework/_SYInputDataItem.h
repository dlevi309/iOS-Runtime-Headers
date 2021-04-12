/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


#import <CompanionSync/CompanionSync-Structs.h>
@class NSMutableData;

@interface _SYInputDataItem : NSObject {

	os_unfair_lock_s _lock;
	unsigned long long _length;
	NSMutableData* _data;
	/*^block*/id _callback;

}

@property (assign,nonatomic) os_unfair_lock_s lock;                             //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) unsigned long long length;                         //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) unsigned long long lengthRemaining; 
@property (nonatomic,readonly) NSMutableData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id callback;                                         //@synthesize callback=_callback - In the implementation block
-(void)setLength:(unsigned long long)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(unsigned long long)length;
-(os_unfair_lock_s)lock;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(NSMutableData *)data;
-(id)initWithLength:(unsigned long long)arg1 callback:(/*^block*/id)arg2 ;
-(unsigned long long)lengthRemaining;
@end

