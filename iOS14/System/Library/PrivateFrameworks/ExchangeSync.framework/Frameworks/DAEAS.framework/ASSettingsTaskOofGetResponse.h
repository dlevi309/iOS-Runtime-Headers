/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString, NSArray, NSMutableArray;

@interface ASSettingsTaskOofGetResponse : ASItem {

	NSNumber* _oofState;
	NSString* _startTime;
	NSString* _endTime;
	NSArray* _oofMessages;
	NSMutableArray* _mOofMessages;

}

@property (nonatomic,retain) NSMutableArray * mOofMessages;              //@synthesize mOofMessages=_mOofMessages - In the implementation block
@property (nonatomic,retain) NSNumber * oofState;                        //@synthesize oofState=_oofState - In the implementation block
@property (nonatomic,retain) NSString * startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSString * endTime;                         //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSArray * oofMessages;                      //@synthesize oofMessages=_oofMessages - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setStartTime:(NSString *)arg1 ;
-(id)description;
-(NSNumber *)oofState;
-(void)setEndTime:(NSString *)arg1 ;
-(void)setOofState:(NSNumber *)arg1 ;
-(NSString *)endTime;
-(NSString *)startTime;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(NSMutableArray *)mOofMessages;
-(void)setMOofMessages:(NSMutableArray *)arg1 ;
-(void)addOofMessages:(id)arg1 ;
-(NSArray *)oofMessages;
-(id)convertToDAOofParams;
-(void)setOofMessages:(NSArray *)arg1 ;
@end

