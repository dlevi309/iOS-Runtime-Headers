/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSPointerArray, NSString;

@interface CUState : NSObject {

	/*^block*/id _eventHandler;
	unsigned long long _index;
	NSPointerArray* _lcaMap;
	NSString* _name;
	CUState* _parent;

}

@property (nonatomic,copy) id eventHandler;                       //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)invalidate;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(id)initWithName:(id)arg1 parent:(id)arg2 ;
@end

