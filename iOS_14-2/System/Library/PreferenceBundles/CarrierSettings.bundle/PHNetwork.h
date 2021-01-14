/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
*/


@class NSString, NSDictionary;

@interface PHNetwork : NSObject {

	NSString* _name;
	unsigned long long _state;
	NSDictionary* _dictionaryRepresentation;

}

@property (retain) NSDictionary * dictionaryRepresentation;              //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long state;                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (readonly) NSString * code; 
+(id)networkFromDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)init;
-(void)setDictionaryRepresentation:(NSDictionary *)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)state;
-(NSString *)code;
-(void)setName:(NSString *)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
@end

