/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)startTime;
-(NSString *)endTime;
-(void)setEndTime:(NSString *)arg1 ;
-(void)setStartTime:(NSString *)arg1 ;
-(NSNumber *)oofState;
-(void)setOofState:(NSNumber *)arg1 ;
-(id)convertToDAOofParams;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(NSMutableArray *)mOofMessages;
-(void)setMOofMessages:(NSMutableArray *)arg1 ;
-(void)addOofMessages:(id)arg1 ;
-(NSArray *)oofMessages;
-(void)setOofMessages:(NSArray *)arg1 ;
@end

