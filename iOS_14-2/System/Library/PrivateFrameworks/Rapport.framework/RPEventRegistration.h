/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)eventID;
-(void)setHandler:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)handler;
-(void)setEventID:(NSString *)arg1 ;
@end

