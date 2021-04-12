/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSString, RTXPCActivityCriteria;

@interface RTXPCActivityRegistrant : NSObject {

	NSString* _identifier;
	RTXPCActivityCriteria* _criteria;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) RTXPCActivityCriteria * criteria;              //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,copy,readonly) id handler;                               //@synthesize handler=_handler - In the implementation block
-(id)init;
-(id)description;
-(id)handler;
-(NSString *)identifier;
-(RTXPCActivityCriteria *)criteria;
-(id)initWithIdentifier:(id)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

