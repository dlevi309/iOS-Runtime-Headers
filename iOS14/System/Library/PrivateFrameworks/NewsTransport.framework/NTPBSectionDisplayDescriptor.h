/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBSectionDisplayDescriptor : PBCodable <NSCopying> {

	NSString* _actionTitle;
	NSString* _actionURLString;
	NSString* _backgroundColorDark;
	NSString* _backgroundColorLight;
	NSString* _backgroundGradientColor;
	NSString* _name;
	NSString* _nameActionURLString;
	NSString* _nameColorDark;
	NSString* _nameColorLight;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasNameColorLight; 
@property (nonatomic,retain) NSString * nameColorLight;                       //@synthesize nameColorLight=_nameColorLight - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundGradientColor; 
@property (nonatomic,retain) NSString * backgroundGradientColor;              //@synthesize backgroundGradientColor=_backgroundGradientColor - In the implementation block
@property (nonatomic,readonly) BOOL hasActionTitle; 
@property (nonatomic,retain) NSString * actionTitle;                          //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasActionURLString; 
@property (nonatomic,retain) NSString * actionURLString;                      //@synthesize actionURLString=_actionURLString - In the implementation block
@property (nonatomic,readonly) BOOL hasNameColorDark; 
@property (nonatomic,retain) NSString * nameColorDark;                        //@synthesize nameColorDark=_nameColorDark - In the implementation block
@property (nonatomic,readonly) BOOL hasNameActionURLString; 
@property (nonatomic,retain) NSString * nameActionURLString;                  //@synthesize nameActionURLString=_nameActionURLString - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColorLight; 
@property (nonatomic,retain) NSString * backgroundColorLight;                 //@synthesize backgroundColorLight=_backgroundColorLight - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColorDark; 
@property (nonatomic,retain) NSString * backgroundColorDark;                  //@synthesize backgroundColorDark=_backgroundColorDark - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(void)setActionURLString:(NSString *)arg1 ;
-(void)setActionTitle:(NSString *)arg1 ;
-(BOOL)hasActionTitle;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)actionTitle;
-(BOOL)hasBackgroundColorLight;
-(BOOL)hasBackgroundColorDark;
-(NSString *)name;
-(NSString *)backgroundColorLight;
-(NSString *)backgroundColorDark;
-(id)description;
-(void)setBackgroundGradientColor:(NSString *)arg1 ;
-(BOOL)hasNameColorLight;
-(BOOL)hasBackgroundGradientColor;
-(BOOL)hasNameColorDark;
-(NSString *)nameColorLight;
-(NSString *)backgroundGradientColor;
-(BOOL)hasActionURLString;
-(void)setBackgroundColorDark:(NSString *)arg1 ;
-(NSString *)nameColorDark;
-(void)setBackgroundColorLight:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setNameActionURLString:(NSString *)arg1 ;
-(BOOL)hasNameActionURLString;
-(NSString *)nameActionURLString;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setNameColorLight:(NSString *)arg1 ;
-(void)setNameColorDark:(NSString *)arg1 ;
-(NSString *)actionURLString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

