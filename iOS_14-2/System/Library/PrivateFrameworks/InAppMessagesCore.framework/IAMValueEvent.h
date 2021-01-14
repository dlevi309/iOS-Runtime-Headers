/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
*/

#import <InAppMessagesCore/IAMEvent.h>

@protocol NSCopying;
@interface IAMValueEvent : IAMEvent {

	id<NSCopying> value;

}

@property (nonatomic,copy) id<NSCopying> value; 
-(void)setValue:(id<NSCopying>)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(id<NSCopying>)value;
@end

