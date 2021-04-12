/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSString, NSMutableArray, NSArray, NSDictionary;

@interface GEOAvailableExperimentBranch : NSObject {

	NSString* _label;
	NSString* _name;
	NSString* _experimentIdentifier;
	NSMutableArray* _assignments;
	NSArray* _clientConfig;

}

@property (setter=_setClientConfig:,getter=_clientConfig,nonatomic,retain) NSArray * clientConfig;                    //@synthesize clientConfig=_clientConfig - In the implementation block
@property (getter=_dictionaryRepresentation,nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * label;                                                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * clientConfigValues; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
-(BOOL)isActive;
-(id)_dictionaryRepresentation;
-(NSString *)name;
-(id)description;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSDictionary *)clientConfigValues;
-(void)_addAssignment:(id)arg1 ;
-(id)initWithLabel:(id)arg1 name:(id)arg2 experimentIdentifier:(id)arg3 ;
-(id)querySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2 ;
-(id)_clientConfig;
-(void)_setClientConfig:(id)arg1 ;
-(NSString *)label;
@end

