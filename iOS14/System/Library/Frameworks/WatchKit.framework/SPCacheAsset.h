/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


@class NSString;

@interface SPCacheAsset : NSObject {

	NSString* _key;
	unsigned long long _state;
	unsigned long long _size;
	double _accessDate;

}

@property (nonatomic,retain) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double accessDate;                     //@synthesize accessDate=_accessDate - In the implementation block
+(id)toProto:(id)arg1 ;
+(id)fromProto:(id)arg1 ;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(NSString *)key;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(double)accessDate;
-(void)setKey:(NSString *)arg1 ;
-(void)setAccessDate:(double)arg1 ;
-(id)initWithName:(id)arg1 size:(unsigned long long)arg2 state:(unsigned long long)arg3 accessDate:(id)arg4 ;
@end

