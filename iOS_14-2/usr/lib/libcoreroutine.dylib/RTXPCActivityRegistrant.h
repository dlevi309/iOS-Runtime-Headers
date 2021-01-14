/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(RTXPCActivityCriteria *)criteria;
-(NSString *)identifier;
-(id)handler;
-(id)initWithIdentifier:(id)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

