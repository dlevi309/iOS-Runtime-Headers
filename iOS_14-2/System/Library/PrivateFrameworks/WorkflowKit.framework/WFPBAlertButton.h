/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBAlertButton : PBCodable <NSCopying> {

	int _style;
	NSString* _title;
	BOOL _preferred;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int style;                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL preferred;                //@synthesize preferred=_preferred - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)preferred;
-(void)setPreferred:(BOOL)arg1 ;
-(id)styleAsString:(int)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

