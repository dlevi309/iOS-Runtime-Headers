/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@class NSString, NSUserActivity;

@interface SGEventActivity : NSObject {

	unsigned char _type;
	NSString* _teamIdentifier;
	NSUserActivity* _userActivity;
	double _validStartDate;
	double _validEndDate;

}

@property (nonatomic,readonly) NSString * teamIdentifier;                  //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned char type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUserActivity * userActivity;              //@synthesize userActivity=_userActivity - In the implementation block
@property (nonatomic,readonly) double validStartDate;                      //@synthesize validStartDate=_validStartDate - In the implementation block
@property (nonatomic,readonly) double validEndDate;                        //@synthesize validEndDate=_validEndDate - In the implementation block
+(id)describeType:(unsigned char)arg1 ;
+(unsigned char)typeForString:(id)arg1 ;
-(unsigned char)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonObject;
-(NSUserActivity *)userActivity;
-(NSString *)teamIdentifier;
-(double)validStartDate;
-(id)initWithTeamIdentifier:(id)arg1 type:(unsigned char)arg2 userActivity:(id)arg3 validStartDate:(double)arg4 validEndDate:(double)arg5 ;
-(double)validEndDate;
@end

