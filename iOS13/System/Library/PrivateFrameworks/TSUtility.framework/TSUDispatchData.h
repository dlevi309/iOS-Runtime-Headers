/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@protocol OS_dispatch_data;
@class NSObject;

@interface TSUDispatchData : NSObject {

	NSObject*<OS_dispatch_data> _data;
	unsigned long long _size;
	unsigned long long _maxFragmentsCount;
	NSObject*<OS_dispatch_data> _fragmentedData;
	NSObject*<OS_dispatch_data> _defragmentedData;
	unsigned long long _fragmentsCount;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> fragmentedData;                //@synthesize fragmentedData=_fragmentedData - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> defragmentedData;              //@synthesize defragmentedData=_defragmentedData - In the implementation block
@property (nonatomic,readonly) unsigned long long fragmentsCount;                         //@synthesize fragmentsCount=_fragmentsCount - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> data; 
@property (nonatomic,readonly) unsigned long long size;                                   //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long maxFragmentsCount;                        //@synthesize maxFragmentsCount=_maxFragmentsCount - In the implementation block
-(id)init;
-(id)initWithData:(id)arg1 ;
-(NSObject*<OS_dispatch_data>)data;
-(unsigned long long)size;
-(void)append:(id)arg1 ;
-(unsigned long long)maxFragmentsCount;
-(void)setMaxFragmentsCount:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_data>)fragmentedData;
-(NSObject*<OS_dispatch_data>)defragmentedData;
-(unsigned long long)fragmentsCount;
@end

