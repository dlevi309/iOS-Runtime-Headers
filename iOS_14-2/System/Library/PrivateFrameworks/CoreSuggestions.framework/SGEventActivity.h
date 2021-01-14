/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(unsigned char)typeForString:(id)arg1 ;
+(id)describeType:(unsigned char)arg1 ;
-(NSUserActivity *)userActivity;
-(id)initWithDictionary:(id)arg1 ;
-(double)validStartDate;
-(double)validEndDate;
-(id)jsonObject;
-(id)initWithTeamIdentifier:(id)arg1 type:(unsigned char)arg2 userActivity:(id)arg3 validStartDate:(double)arg4 validEndDate:(double)arg5 ;
-(unsigned char)type;
-(NSString *)teamIdentifier;
@end

