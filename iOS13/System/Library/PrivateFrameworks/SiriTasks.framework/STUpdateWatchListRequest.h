/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface STUpdateWatchListRequest : AFSiriRequest {

	NSArray* _contentIdentifiersToAdd;
	NSArray* _contentIdentifiersToRemove;

}

@property (setter=_setContentIdentifiersToAdd:,nonatomic,copy) NSArray * contentIdentifiersToAdd;                    //@synthesize contentIdentifiersToAdd=_contentIdentifiersToAdd - In the implementation block
@property (setter=_setContentIdentifiersToRemove:,nonatomic,copy) NSArray * contentIdentifiersToRemove;              //@synthesize contentIdentifiersToRemove=_contentIdentifiersToRemove - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)contentIdentifiersToAdd;
-(void)_setContentIdentifiersToAdd:(id)arg1 ;
-(NSArray *)contentIdentifiersToRemove;
-(void)_setContentIdentifiersToRemove:(id)arg1 ;
@end

