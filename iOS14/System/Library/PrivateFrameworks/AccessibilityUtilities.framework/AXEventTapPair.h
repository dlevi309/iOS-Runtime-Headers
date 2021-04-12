/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSString;

@interface AXEventTapPair : NSObject {

	int priority;
	int _type;
	/*^block*/id handler;
	NSString* identifier;
	IOHIDEventSystemClientRef _systemClient;
	/*^block*/id _matchingServiceHandler;
	/*^block*/id _failedToHandleInTime;

}

@property (nonatomic,copy) id handler; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int priority; 
@property (assign,nonatomic) int type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IOHIDEventSystemClientRef systemClient;              //@synthesize systemClient=_systemClient - In the implementation block
@property (nonatomic,copy) id matchingServiceHandler;                             //@synthesize matchingServiceHandler=_matchingServiceHandler - In the implementation block
@property (nonatomic,copy) id failedToHandleInTime;                               //@synthesize failedToHandleInTime=_failedToHandleInTime - In the implementation block
-(void)setHandler:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(IOHIDEventSystemClientRef)systemClient;
-(void)setSystemClient:(IOHIDEventSystemClientRef)arg1 ;
-(id)matchingServiceHandler;
-(void)setMatchingServiceHandler:(id)arg1 ;
-(id)failedToHandleInTime;
-(void)setFailedToHandleInTime:(id)arg1 ;
-(int)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)handler;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(void)dealloc;
@end

