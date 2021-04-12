/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFTrack.h>
@class NSString, NSURL, SFActionItem, NSDictionary, NSData;


@protocol SFTrack <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * number; 
@property (nonatomic,copy) NSString * duration; 
@property (assign,nonatomic) BOOL highlighted; 
@property (nonatomic,copy) NSURL * preview; 
@property (nonatomic,retain) SFActionItem * playAction; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setNumber:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSURL *)preview;
-(NSString *)number;
-(void)setDuration:(id)arg1;
-(void)setPlayAction:(id)arg1;
-(BOOL)highlighted;
-(NSData *)jsonData;
-(SFActionItem *)playAction;
-(void)setTitle:(id)arg1;
-(void)setPreview:(id)arg1;
-(NSString *)duration;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, SFActionItem, NSDictionary, NSData;

@interface SFTrack : NSObject <SFTrack, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	BOOL _highlighted;
	NSString* _title;
	NSString* _number;
	NSString* _duration;
	NSURL* _preview;
	SFActionItem* _playAction;

}

@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * number;                                        //@synthesize number=_number - In the implementation block
@property (nonatomic,copy) NSString * duration;                                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                       //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,copy) NSURL * preview;                                          //@synthesize preview=_preview - In the implementation block
@property (nonatomic,retain) SFActionItem * playAction;                              //@synthesize playAction=_playAction - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setNumber:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSURL *)preview;
-(NSString *)number;
-(void)setDuration:(NSString *)arg1 ;
-(void)setPlayAction:(SFActionItem *)arg1 ;
-(BOOL)highlighted;
-(NSData *)jsonData;
-(SFActionItem *)playAction;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)hasHighlighted;
-(void)setPreview:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSString *)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
@end

