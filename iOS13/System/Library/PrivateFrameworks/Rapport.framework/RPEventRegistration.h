/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@class NSString, NSDictionary;

@interface RPEventRegistration : NSObject {

	NSString* _eventID;
	NSDictionary* _options;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * eventID;                  //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(NSDictionary *)options;
-(void)setHandler:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)eventID;
-(void)setEventID:(NSString *)arg1 ;
@end

