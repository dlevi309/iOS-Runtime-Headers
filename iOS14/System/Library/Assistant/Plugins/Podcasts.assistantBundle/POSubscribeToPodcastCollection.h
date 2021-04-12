/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
*/

#import <SAObjects/SAMPSubscribeToPodcastCollection.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface POSubscribeToPodcastCollection : SAMPSubscribeToPodcastCollection <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_commandStatusForRemoteStatus:(unsigned)arg1 assistantError:(id)arg2 ;
-(id)_validate;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(id)_subscribeRequestIdentifier;
@end

