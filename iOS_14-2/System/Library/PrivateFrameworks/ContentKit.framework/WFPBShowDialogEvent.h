/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBShowDialogEvent : PBCodable <NSCopying> {

	NSString* _automationType;
	NSString* _dialogType;
	NSString* _dismissalType;
	NSString* _key;
	NSString* _presentationStyle;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                            //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasDialogType; 
@property (nonatomic,retain) NSString * dialogType;                     //@synthesize dialogType=_dialogType - In the implementation block
@property (nonatomic,readonly) BOOL hasPresentationStyle; 
@property (nonatomic,retain) NSString * presentationStyle;              //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasDismissalType; 
@property (nonatomic,retain) NSString * dismissalType;                  //@synthesize dismissalType=_dismissalType - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomationType; 
@property (nonatomic,retain) NSString * automationType;                 //@synthesize automationType=_automationType - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(NSString *)presentationStyle;
-(void)setDialogType:(NSString *)arg1 ;
-(void)setPresentationStyle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(NSString *)dialogType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDismissalType:(NSString *)arg1 ;
-(NSString *)dismissalType;
-(BOOL)hasDialogType;
-(BOOL)hasPresentationStyle;
-(BOOL)hasDismissalType;
-(BOOL)hasAutomationType;
@end

