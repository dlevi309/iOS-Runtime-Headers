/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUIdentifiable.h>

@class NUIdentifier, NUCompositionSchema, NSDictionary, NSString;

@interface NUComposition : NSObject <NUIdentifiable> {

	NUIdentifier* _identifier;
	NUCompositionSchema* _schema;
	long long _mediaType;

}

@property (nonatomic,readonly) NSDictionary * contents; 
@property (nonatomic,readonly) NUCompositionSchema * schema;              //@synthesize schema=_schema - In the implementation block
@property (assign,nonatomic) long long mediaType;                         //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NUIdentifier * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)contents;
-(NUCompositionSchema *)schema;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(long long)mediaType;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(unsigned long long)hash;
-(NUIdentifier *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCompositionSchema:(id)arg1 ;
-(BOOL)isEqualToComposition:(id)arg1 ;
@end

