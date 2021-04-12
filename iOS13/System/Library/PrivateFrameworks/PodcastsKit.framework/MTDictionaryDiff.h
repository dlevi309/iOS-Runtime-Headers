/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSSet *)properties;
-(void)setProperties:(NSSet *)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(NSMutableArray *)callbacks;
-(void)addCallback:(/*^block*/id)arg1 ;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
@end

