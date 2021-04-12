/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)code;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)state;
-(NSString *)displayName;
-(void)setState:(unsigned long long)arg1 ;
-(void)setDictionaryRepresentation:(NSDictionary *)arg1 ;
@end

