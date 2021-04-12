/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(id)details;
-(id)initWithName:(id)arg1 details:(id)arg2 ;
@end

