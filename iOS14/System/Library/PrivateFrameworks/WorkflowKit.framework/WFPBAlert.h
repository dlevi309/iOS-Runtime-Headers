/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface WFPBAlert : PBCodable <NSCopying> {

	NSMutableArray* _buttons;
	NSString* _message;
	int _preferredStyle;
	NSString* _title;
	SCD_Struct_WF105 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) NSString * message;                    //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttons;              //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredStyle; 
@property (assign,nonatomic) int preferredStyle;                    //@synthesize preferredStyle=_preferredStyle - In the implementation block
+(Class)buttonsType;
-(int)preferredStyle;
-(void)setMessage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)message;
-(BOOL)hasTitle;
-(NSMutableArray *)buttons;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)buttonsCount;
-(void)clearButtons;
-(BOOL)hasMessage;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPreferredStyle:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)addButtons:(id)arg1 ;
-(id)buttonsAtIndex:(unsigned long long)arg1 ;
-(void)setHasPreferredStyle:(BOOL)arg1 ;
-(BOOL)hasPreferredStyle;
-(id)preferredStyleAsString:(int)arg1 ;
-(int)StringAsPreferredStyle:(id)arg1 ;
@end

