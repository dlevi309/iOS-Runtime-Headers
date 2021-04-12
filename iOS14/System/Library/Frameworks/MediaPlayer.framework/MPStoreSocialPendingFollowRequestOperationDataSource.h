/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPStoreSocialRequestOperationDataSource.h>

@class MPModelSocialPerson, NSString;

@interface MPStoreSocialPendingFollowRequestOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource> {

	long long _action;
	MPModelSocialPerson* _person;

}

@property (nonatomic,readonly) long long action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) MPModelSocialPerson * person;              //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPModelSocialPerson *)person;
-(id)queryItems;
-(id)initWithAction:(long long)arg1 ;
-(long long)action;
-(id)httpBody;
-(id)fallbackBagKeys;
-(long long)httpBodyType;
-(long long)httpMethod;
-(void)setPerson:(MPModelSocialPerson *)arg1 ;
-(id)_actionTypeString;
-(id)bagKey;
@end

