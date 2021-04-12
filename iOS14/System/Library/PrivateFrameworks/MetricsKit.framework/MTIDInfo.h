/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTID.h>

@class NSString, NSDate, NSDictionary, MTIDScheme, MTIDSecret;

@interface MTIDInfo : NSObject <MTID> {

	BOOL _isSynchronized;
	MTIDScheme* _scheme;
	MTIDSecret* _secret;
	NSString* _idString;
	NSDate* _effectiveDate;
	NSDate* _expirationDate;
	NSDate* _computedDate;

}

@property (nonatomic,retain) MTIDScheme * scheme;                              //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,retain) MTIDSecret * secret;                              //@synthesize secret=_secret - In the implementation block
@property (nonatomic,copy) NSString * idString;                                //@synthesize idString=_idString - In the implementation block
@property (nonatomic,copy) NSDate * effectiveDate;                             //@synthesize effectiveDate=_effectiveDate - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) BOOL isSynchronized;                              //@synthesize isSynchronized=_isSynchronized - In the implementation block
@property (nonatomic,retain) NSDate * computedDate;                            //@synthesize computedDate=_computedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * idNamespace; 
@property (nonatomic,readonly) long long idType; 
@property (nonatomic,readonly) double lifespan; 
@property (nonatomic,copy,readonly) NSDictionary * metricsFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScheme:(MTIDScheme *)arg1 ;
-(MTIDScheme *)scheme;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(MTIDSecret *)secret;
-(long long)idType;
-(NSString *)idString;
-(NSString *)description;
-(NSDate *)expirationDate;
-(NSDate *)effectiveDate;
-(id)debugInfo;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSecret:(MTIDSecret *)arg1 ;
-(BOOL)isSynchronized;
-(void)setIsSynchronized:(BOOL)arg1 ;
-(NSString *)idNamespace;
-(double)lifespan;
-(NSDictionary *)metricsFields;
-(id)initWithScheme:(id)arg1 secret:(id)arg2 idString:(id)arg3 effectiveDate:(id)arg4 expirationDate:(id)arg5 ;
-(void)setIdString:(NSString *)arg1 ;
-(void)setEffectiveDate:(NSDate *)arg1 ;
-(void)setComputedDate:(NSDate *)arg1 ;
-(BOOL)isValueExpired;
-(NSDate *)computedDate;
@end

