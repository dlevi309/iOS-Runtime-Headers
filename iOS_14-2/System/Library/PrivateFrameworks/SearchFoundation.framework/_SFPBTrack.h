/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTrack.h>
@class NSString, _SFPBURL, _SFPBActionItem, NSData;


@protocol _SFPBTrack <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * number; 
@property (nonatomic,copy) NSString * duration; 
@property (assign,nonatomic) BOOL highlighted; 
@property (nonatomic,retain) _SFPBURL * preview; 
@property (nonatomic,retain) _SFPBActionItem * playAction; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setNumber:(id)arg1;
-(_SFPBURL *)preview;
-(NSString *)number;
-(void)setDuration:(id)arg1;
-(void)setPlayAction:(id)arg1;
-(BOOL)highlighted;
-(NSData *)jsonData;
-(_SFPBActionItem *)playAction;
-(void)setTitle:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setPreview:(id)arg1;
-(NSString *)duration;
-(id)initWithJSON:(id)arg1;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBURL, _SFPBActionItem, NSData;

@interface _SFPBTrack : PBCodable <_SFPBTrack, NSSecureCoding> {

	BOOL _highlighted;
	NSString* _title;
	NSString* _number;
	NSString* _duration;
	_SFPBURL* _preview;
	_SFPBActionItem* _playAction;

}

@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * number;                           //@synthesize number=_number - In the implementation block
@property (nonatomic,copy) NSString * duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                          //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) _SFPBURL * preview;                        //@synthesize preview=_preview - In the implementation block
@property (nonatomic,retain) _SFPBActionItem * playAction;              //@synthesize playAction=_playAction - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNumber:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(_SFPBURL *)preview;
-(NSString *)number;
-(void)setDuration:(NSString *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(void)setPlayAction:(_SFPBActionItem *)arg1 ;
-(BOOL)highlighted;
-(NSData *)jsonData;
-(_SFPBActionItem *)playAction;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setPreview:(_SFPBURL *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)duration;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

