/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@class NSObject, NSString, NWAccumulation;

@interface NWAccumulatedValue : NSObject {

	NSObject* _object;
	NSString* _keyPath;
	NWAccumulation* _accumulation;
	/*^block*/id _callback;

}

@property (nonatomic,retain) NSObject * object;                          //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSString * keyPath;                         //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) NWAccumulation * accumulation;              //@synthesize accumulation=_accumulation - In the implementation block
@property (nonatomic,copy) id callback;                                  //@synthesize callback=_callback - In the implementation block
-(id)snapshot;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(NWAccumulation *)accumulation;
-(void)setAccumulation:(NWAccumulation *)arg1 ;
-(NSObject *)object;
-(void)setObject:(NSObject *)arg1 ;
-(id)description;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSString *)keyPath;
@end

