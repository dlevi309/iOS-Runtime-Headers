/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class MPModelSocialPerson;


@protocol MPStoreSocialRequestOperationDataSource <NSObject>
@property (nonatomic,retain) MPModelSocialPerson * person; 
@optional
-(id)fallbackBagKeys;
-(id)fallbackURLString;

@required
-(id)queryItems;
-(id)bagKey;
-(MPModelSocialPerson *)person;
-(void)setPerson:(id)arg1;
-(id)httpBody;
-(long long)httpBodyType;
-(long long)httpMethod;

@end

