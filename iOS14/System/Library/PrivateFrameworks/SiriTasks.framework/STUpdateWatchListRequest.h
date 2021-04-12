/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

