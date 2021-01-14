/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSString;

@interface CNTask : NSObject {

	BOOL _cancelled;
	NSString* _name;

}

@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
+(id)taskWithBlock:(/*^block*/id)arg1 ;
+(id)taskWithName:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)taskWithResult:(id)arg1 ;
+(id)taskWithName:(id)arg1 subtasks:(id)arg2 ;
+(id)taskWithName:(id)arg1 result:(id)arg2 ;
+(id)taskWithError:(id)arg1 ;
+(id)taskWithName:(id)arg1 error:(id)arg2 ;
-(id)map:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(id)run;
-(id)init;
-(id)flatMap:(/*^block*/id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(id)profileWithTimeProvider:(id)arg1 os_log:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(id)run:(id*)arg1 ;
-(BOOL)cancel;
-(BOOL)isCancelled;
@end

