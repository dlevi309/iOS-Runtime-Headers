/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPStoreSocialRequestOperationDataSource.h>

@class MPModelSocialPerson, NSString;

@interface MPStoreSocialBlockOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource> {

	MPModelSocialPerson* _person;

}

@property (nonatomic,retain) MPModelSocialPerson * person;              //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPModelSocialPerson *)person;
-(id)queryItems;
-(id)httpBody;
-(long long)httpBodyType;
-(long long)httpMethod;
-(void)setPerson:(MPModelSocialPerson *)arg1 ;
-(id)bagKey;
@end

