/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface MPMediaKitEntityPayloadTransformer : NSObject {

	NSString* _identifier;
	NSString* _type;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _meta;
	NSString* _transformedType;
	NSMutableDictionary* _relationships;

}

@property (nonatomic,readonly) NSString * transformedType;                       //@synthesize transformedType=_transformedType - In the implementation block
@property (nonatomic,readonly) NSDictionary * transformedPayload; 
@property (nonatomic,readonly) NSMutableDictionary * relationships;              //@synthesize relationships=_relationships - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * attributes;                 //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * meta;                       //@synthesize meta=_meta - In the implementation block
-(NSMutableDictionary *)meta;
-(NSMutableDictionary *)relationships;
-(NSMutableDictionary *)attributes;
-(NSString *)type;
-(id)initWithType:(id)arg1 transformedType:(id)arg2 ;
-(NSDictionary *)transformedPayload;
-(NSString *)transformedType;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

