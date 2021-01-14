/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSMutableDictionary, NSDictionary;

@interface TIEventDescriptorRegistry : NSObject {

	BOOL _loaded;
	NSMutableDictionary* _eventDescriptors;
	NSMutableDictionary* _eventSpecs;
	NSDictionary* _config;

}

@property (nonatomic,readonly) NSDictionary * config;                               //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventDescriptors;              //@synthesize eventDescriptors=_eventDescriptors - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventSpecs;                    //@synthesize eventSpecs=_eventSpecs - In the implementation block
@property (assign,nonatomic) BOOL loaded;                                           //@synthesize loaded=_loaded - In the implementation block
+(id)registryWithConfig:(id)arg1 ;
+(id)registryWithDescriptors:(id)arg1 andSpecs:(id)arg2 ;
-(NSDictionary *)config;
-(BOOL)loaded;
-(NSMutableDictionary *)eventSpecs;
-(NSMutableDictionary *)eventDescriptors;
-(id)initWithConfig:(id)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(id)contextFromError:(id)arg1 ;
-(id)valueFromError:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDescriptors:(id)arg1 andSpecs:(id)arg2 ;
-(id)allEventDescriptors;
-(id)eventDescriptorWithName:(id)arg1 ;
-(id)eventSpecWithName:(id)arg1 ;
-(void)loadEventDescriptors;
@end

