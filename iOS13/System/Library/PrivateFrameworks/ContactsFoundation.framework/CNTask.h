/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)run;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(id)recover:(/*^block*/id)arg1 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)run:(id*)arg1 ;
-(id)map:(/*^block*/id)arg1 ;
@end

