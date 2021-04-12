/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCKeyboardEvent.h>

@class NSString;

@interface _GCKeyboardEventImpl : NSObject <_GCKeyboardEvent> {

	long long usagePage;
	long long usage;
	long long down;

}

@property (assign,nonatomic) long long usagePage; 
@property (assign,nonatomic) long long usage; 
@property (assign,nonatomic) long long down; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)down;
-(long long)usage;
-(void)setUsagePage:(long long)arg1 ;
-(long long)usagePage;
-(id)initWithKeyboardEvent:(id)arg1 ;
-(void)setUsage:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDown:(long long)arg1 ;
@end

