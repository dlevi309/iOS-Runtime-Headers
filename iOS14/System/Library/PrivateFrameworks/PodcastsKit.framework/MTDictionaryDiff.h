/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@class NSDictionary, NSSet, NSMutableArray;

@interface MTDictionaryDiff : NSObject {

	NSDictionary* _dictionary;
	NSSet* _properties;
	NSMutableArray* _callbacks;

}

@property (nonatomic,retain) NSMutableArray * callbacks;              //@synthesize callbacks=_callbacks - In the implementation block
@property (nonatomic,retain) NSDictionary * dictionary;               //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSSet * properties;                      //@synthesize properties=_properties - In the implementation block
-(id)initWithProperties:(id)arg1 ;
-(NSSet *)properties;
-(id)init;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSMutableArray *)callbacks;
-(NSDictionary *)dictionary;
-(void)addCallback:(/*^block*/id)arg1 ;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
-(void)setProperties:(NSSet *)arg1 ;
@end

