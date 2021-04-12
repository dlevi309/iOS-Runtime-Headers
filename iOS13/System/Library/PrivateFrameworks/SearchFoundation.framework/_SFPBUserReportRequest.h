/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(NSData *)jsonData;
-(NSString *)affordanceText;
-(void)setAffordanceText:(id)arg1;
-(NSString *)dismissText;
-(void)setDismissText:(id)arg1;
-(NSArray *)userReportOptions;
-(void)setUserReportOptions:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addUserReportOptions:(id)arg1;
-(void)clearUserReportOptions;
-(unsigned long long)userReportOptionsCount;
-(id)userReportOptionsAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface _SFPBUserReportRequest : PBCodable <_SFPBUserReportRequest, NSSecureCoding> {

	NSString* _affordanceText;
	NSString* _title;
	NSString* _dismissText;
	NSArray* _userReportOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * affordanceText;                //@synthesize affordanceText=_affordanceText - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * dismissText;                   //@synthesize dismissText=_dismissText - In the implementation block
@property (nonatomic,copy) NSArray * userReportOptions;              //@synthesize userReportOptions=_userReportOptions - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)affordanceText;
-(void)setAffordanceText:(NSString *)arg1 ;
-(NSString *)dismissText;
-(void)setDismissText:(NSString *)arg1 ;
-(NSArray *)userReportOptions;
-(void)setUserReportOptions:(NSArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addUserReportOptions:(id)arg1 ;
-(void)clearUserReportOptions;
-(unsigned long long)userReportOptionsCount;
-(id)userReportOptionsAtIndex:(unsigned long long)arg1 ;
@end

