/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class MPModelSocialPerson;


@protocol MPStoreSocialRequestOperationDataSource <NSObject>
@property (nonatomic,retain) MPModelSocialPerson * person; 
@optional
-(id)fallbackURLString;
-(id)fallbackBagKeys;

@required
-(MPModelSocialPerson *)person;
-(id)queryItems;
-(id)httpBody;
-(long long)httpBodyType;
-(long long)httpMethod;
-(void)setPerson:(id)arg1;
-(id)bagKey;

@end

