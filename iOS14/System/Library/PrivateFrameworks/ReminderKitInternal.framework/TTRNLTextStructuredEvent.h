/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal
*/


@class TTRNLTextStructuredEventRecurrentEvent, NSArray;

@interface TTRNLTextStructuredEvent : NSObject {

	void* _structuredEvent;

}

@property (assign,nonatomic) void* structuredEvent;                                                  //@synthesize structuredEvent=_structuredEvent - In the implementation block
@property (nonatomic,readonly) TTRNLTextStructuredEventRecurrentEvent * recurrentEvent; 
@property (nonatomic,readonly) NSArray * locations; 
-(NSArray *)locations;
-(id)initWithStructuredEvent:(void*)arg1 ;
-(void*)structuredEvent;
-(TTRNLTextStructuredEventRecurrentEvent *)recurrentEvent;
-(void)setStructuredEvent:(void*)arg1 ;
-(void)dealloc;
@end

