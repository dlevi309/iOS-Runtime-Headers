/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/


@class NSString;

@interface TFFeedbackEntry : NSObject {

	unsigned long long _type;
	NSString* _identifier;
	NSString* _title;

}

@property (nonatomic,readonly) unsigned long long type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
-(unsigned long long)type;
-(NSString *)identifier;
-(NSString *)title;
-(id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 title:(id)arg3 ;
@end

