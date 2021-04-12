/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBSportsTeam.h>
@class _SFPBImage, NSString, NSData;


@protocol _SFPBSportsTeam <NSObject>
@property (nonatomic,retain) _SFPBImage * logo; 
@property (nonatomic,copy) NSString * record; 
@property (nonatomic,copy) NSString * score; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)record;
-(_SFPBImage *)logo;
-(NSString *)score;
-(void)setRecord:(id)arg1;
-(void)setLogo:(id)arg1;
-(NSData *)jsonData;
-(void)setScore:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)name;
-(NSString *)accessibilityDescription;
-(void)setAccessibilityDescription:(id)arg1;
-(void)setName:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBImage, NSString, NSData;

@interface _SFPBSportsTeam : PBCodable <_SFPBSportsTeam, NSSecureCoding> {

	_SFPBImage* _logo;
	NSString* _record;
	NSString* _score;
	NSString* _accessibilityDescription;
	NSString* _name;

}

@property (nonatomic,retain) _SFPBImage * logo;                              //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy) NSString * record;                                //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * score;                                 //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSString * accessibilityDescription;              //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)record;
-(id)dictionaryRepresentation;
-(_SFPBImage *)logo;
-(NSString *)score;
-(id)initWithFacade:(id)arg1 ;
-(void)setRecord:(NSString *)arg1 ;
-(void)setLogo:(_SFPBImage *)arg1 ;
-(NSData *)jsonData;
-(void)setScore:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSString *)accessibilityDescription;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

