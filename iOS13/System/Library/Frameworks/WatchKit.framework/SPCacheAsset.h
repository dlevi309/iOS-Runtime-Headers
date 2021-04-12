/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)key;
-(unsigned long long)size;
-(unsigned long long)state;
-(void)setKey:(NSString *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(double)accessDate;
-(void)setAccessDate:(double)arg1 ;
-(id)initWithName:(id)arg1 size:(unsigned long long)arg2 state:(unsigned long long)arg3 accessDate:(id)arg4 ;
@end

