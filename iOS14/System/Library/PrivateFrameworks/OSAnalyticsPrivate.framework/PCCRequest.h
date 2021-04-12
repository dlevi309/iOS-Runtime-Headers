/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/


@class NSString, NSDictionary;

@interface PCCRequest : NSObject {

	NSString* _jid;
	NSString* _event;
	NSString* _type;
	/*^block*/id _callback;
	NSDictionary* _options;

}

@property (readonly) NSString * jid;                      //@synthesize jid=_jid - In the implementation block
@property (readonly) NSString * event;                    //@synthesize event=_event - In the implementation block
@property (readonly) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (copy) id callback;                             //@synthesize callback=_callback - In the implementation block
@property (readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(NSString *)jid;
-(NSDictionary *)options;
-(id)description;
-(NSString *)event;
-(NSString *)type;
-(id)initWithMessage:(id)arg1 options:(id)arg2 ;
@end

