/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBUserReportRequest.h>
@class NSString, NSArray, NSData;


@protocol _SFPBUserReportRequest <NSObject>
@property (nonatomic,copy) NSString * affordanceText; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * dismissText; 
@property (nonatomic,copy) NSArray * userReportOptions; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)affordanceText;
-(void)setAffordanceText:(id)arg1;
-(NSString *)dismissText;
-(void)setDismissText:(id)arg1;
-(NSArray *)userReportOptions;
-(void)setUserReportOptions:(id)arg1;
-(NSData *)jsonData;
-(void)setTitle:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)addUserReportOptions:(id)arg1;
-(void)clearUserReportOptions;
-(unsigned long long)userReportOptionsCount;
-(id)userReportOptionsAtIndex:(unsigned long long)arg1;
-(id)initWithJSON:(id)arg1;
-(NSString *)title;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface _SFPBUserReportRequest : PBCodable <_SFPBUserReportRequest, NSSecureCoding> {

	NSString* _affordanceText;
	NSString* _title;
	NSString* _dismissText;
	NSArray* _userReportOptions;

}

@property (nonatomic,copy) NSString * affordanceText;                //@synthesize affordanceText=_affordanceText - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * dismissText;                   //@synthesize dismissText=_dismissText - In the implementation block
@property (nonatomic,copy) NSArray * userReportOptions;              //@synthesize userReportOptions=_userReportOptions - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)affordanceText;
-(void)setAffordanceText:(NSString *)arg1 ;
-(NSString *)dismissText;
-(void)setDismissText:(NSString *)arg1 ;
-(NSArray *)userReportOptions;
-(void)setUserReportOptions:(NSArray *)arg1 ;
-(NSData *)jsonData;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addUserReportOptions:(id)arg1 ;
-(void)clearUserReportOptions;
-(unsigned long long)userReportOptionsCount;
-(id)userReportOptionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

