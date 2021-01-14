/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
*/


@class NSDate, NSString;

@interface DAOofParams : NSObject {

	int _oofState;
	int _externalState;
	NSDate* _startTime;
	NSDate* _endTime;
	NSString* _message;
	NSString* _externalMessage;

}

@property (assign,nonatomic) int oofState;                            //@synthesize oofState=_oofState - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                        //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) int externalState;                       //@synthesize externalState=_externalState - In the implementation block
@property (nonatomic,retain) NSString * externalMessage;              //@synthesize externalMessage=_externalMessage - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)message;
-(id)dictionaryRepresentationForASSettingTask;
-(void)enableOof:(BOOL)arg1 From:(id)arg2 to:(id)arg3 withMessage:(id)arg4 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)oofState;
-(void)setEndTime:(NSDate *)arg1 ;
-(BOOL)isEnabled;
-(int)externalState;
-(NSString *)externalMessage;
-(void)setOofState:(int)arg1 ;
-(void)setExternalState:(int)arg1 ;
-(void)setExternalMessage:(NSString *)arg1 ;
-(NSDate *)endTime;
-(NSDate *)startTime;
@end

