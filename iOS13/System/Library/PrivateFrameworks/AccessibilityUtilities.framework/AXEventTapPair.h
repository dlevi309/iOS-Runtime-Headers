/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,copy) id handler; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int priority; 
@property (assign,nonatomic) int type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IOHIDEventSystemClientRef systemClient;              //@synthesize systemClient=_systemClient - In the implementation block
@property (nonatomic,copy) id matchingServiceHandler;                             //@synthesize matchingServiceHandler=_matchingServiceHandler - In the implementation block
-(void)dealloc;
-(id)description;
-(id)handler;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)identifier;
-(void)setHandler:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(IOHIDEventSystemClientRef)systemClient;
-(void)setSystemClient:(IOHIDEventSystemClientRef)arg1 ;
-(id)matchingServiceHandler;
-(void)setMatchingServiceHandler:(id)arg1 ;
@end

