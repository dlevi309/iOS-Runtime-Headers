/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(id)initWithDictionary:(id)arg1;
-(void)setName:(id)arg1;
-(NSString *)score;
-(void)setScore:(id)arg1;
-(NSString *)record;
-(void)setRecord:(id)arg1;
-(_SFPBImage *)logo;
-(void)setLogo:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setAccessibilityDescription:(id)arg1;
-(NSString *)accessibilityDescription;

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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBImage * logo;                              //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy) NSString * record;                                //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * score;                                 //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSString * accessibilityDescription;              //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)score;
-(void)writeTo:(id)arg1 ;
-(void)setScore:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)record;
-(void)setRecord:(NSString *)arg1 ;
-(_SFPBImage *)logo;
-(void)setLogo:(_SFPBImage *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(NSString *)accessibilityDescription;
@end

