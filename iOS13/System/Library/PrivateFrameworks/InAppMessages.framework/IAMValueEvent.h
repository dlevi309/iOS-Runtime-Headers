/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <InAppMessages/IAMEvent.h>

@protocol NSCopying;
@interface IAMValueEvent : IAMEvent {

	id<NSCopying> value;

}

@property (nonatomic,copy) id<NSCopying> value; 
-(id<NSCopying>)value;
-(void)setValue:(id<NSCopying>)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
@end

