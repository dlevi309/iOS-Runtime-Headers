/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ATXPBProactiveSuggestionUISpecification : PBCodable <NSCopying> {

	NSMutableArray* _preferredLayoutConfigs;
	NSString* _reason;
	NSString* _subtitle;
	NSString* _title;
	BOOL _allowedOnHomeScreen;
	BOOL _allowedOnLockscreen;
	BOOL _allowedOnSpotlight;
	BOOL _shouldClearOnEngagement;
	SCD_Struct_AT2 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasReason; 
@property (nonatomic,retain) NSString * reason;                                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSMutableArray * preferredLayoutConfigs;              //@synthesize preferredLayoutConfigs=_preferredLayoutConfigs - In the implementation block
@property (assign,nonatomic) BOOL hasAllowedOnLockscreen; 
@property (assign,nonatomic) BOOL allowedOnLockscreen;                             //@synthesize allowedOnLockscreen=_allowedOnLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasAllowedOnHomeScreen; 
@property (assign,nonatomic) BOOL allowedOnHomeScreen;                             //@synthesize allowedOnHomeScreen=_allowedOnHomeScreen - In the implementation block
@property (assign,nonatomic) BOOL hasAllowedOnSpotlight; 
@property (assign,nonatomic) BOOL allowedOnSpotlight;                              //@synthesize allowedOnSpotlight=_allowedOnSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasShouldClearOnEngagement; 
@property (assign,nonatomic) BOOL shouldClearOnEngagement;                         //@synthesize shouldClearOnEngagement=_shouldClearOnEngagement - In the implementation block
+(Class)preferredLayoutConfigsType;
-(id)dictionaryRepresentation;
-(BOOL)hasReason;
-(BOOL)hasTitle;
-(BOOL)allowedOnLockscreen;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSubtitle;
-(id)description;
-(NSMutableArray *)preferredLayoutConfigs;
-(NSString *)reason;
-(BOOL)allowedOnHomeScreen;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)shouldClearOnEngagement;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addPreferredLayoutConfigs:(id)arg1 ;
-(unsigned long long)preferredLayoutConfigsCount;
-(void)clearPreferredLayoutConfigs;
-(id)preferredLayoutConfigsAtIndex:(unsigned long long)arg1 ;
-(void)setAllowedOnLockscreen:(BOOL)arg1 ;
-(void)setHasAllowedOnLockscreen:(BOOL)arg1 ;
-(BOOL)hasAllowedOnLockscreen;
-(void)setAllowedOnHomeScreen:(BOOL)arg1 ;
-(void)setHasAllowedOnHomeScreen:(BOOL)arg1 ;
-(BOOL)hasAllowedOnHomeScreen;
-(void)setAllowedOnSpotlight:(BOOL)arg1 ;
-(void)setHasAllowedOnSpotlight:(BOOL)arg1 ;
-(BOOL)hasAllowedOnSpotlight;
-(void)setShouldClearOnEngagement:(BOOL)arg1 ;
-(void)setHasShouldClearOnEngagement:(BOOL)arg1 ;
-(BOOL)hasShouldClearOnEngagement;
-(void)setPreferredLayoutConfigs:(NSMutableArray *)arg1 ;
-(BOOL)allowedOnSpotlight;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

