/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)queryItems;
-(id)bagKey;
-(MPModelSocialPerson *)person;
-(void)setPerson:(MPModelSocialPerson *)arg1 ;
-(id)httpBody;
-(long long)httpBodyType;
-(long long)httpMethod;
@end

