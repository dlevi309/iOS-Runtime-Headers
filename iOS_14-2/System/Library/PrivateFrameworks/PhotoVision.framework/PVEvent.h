/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@class NSString;

@interface PVEvent : NSObject {

	NSString* _name;
	id _details;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id details;                   //@synthesize details=_details - In the implementation block
+(id)eventWithName:(id)arg1 details:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(id)details;
-(id)initWithName:(id)arg1 details:(id)arg2 ;
@end

