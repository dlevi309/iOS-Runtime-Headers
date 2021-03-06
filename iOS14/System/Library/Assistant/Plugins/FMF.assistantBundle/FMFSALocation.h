/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
*/

#import <FMF/FMFSABaseModel.h>

@class SAFmfLocation, UIImage;

@interface FMFSALocation : FMFSABaseModel {

	SAFmfLocation* siriLocation;
	UIImage* _cachedFriendImage;

}

@property (nonatomic,retain) UIImage * cachedFriendImage;               //@synthesize cachedFriendImage=_cachedFriendImage - In the implementation block
@property (nonatomic,retain) SAFmfLocation * siriLocation; 
+(id)bundle;
+(id)locationWithHandle:(id)arg1 saPerson:(id)arg2 andDictionary:(id)arg3 ;
+(id)locationWithSiriLocation:(id)arg1 ;
-(id)numberFormatter;
-(BOOL)hasCoordinate;
-(id)distanceFromLocation:(id)arg1 ;
-(BOOL)isPhone;
-(id)formatPhoneNumber:(id)arg1 ;
-(id)distanceCalculator;
-(id)friendName;
-(id)unformatPhoneNumber:(id)arg1 ;
-(SAFmfLocation *)siriLocation;
-(void)decodeHandle:(id)arg1 saPerson:(id)arg2 withDictionary:(id)arg3 ;
-(void)setSiriLocation:(SAFmfLocation *)arg1 ;
-(id)initWithSiriLocation:(id)arg1 ;
-(id)initWithHandle:(id)arg1 saPerson:(id)arg2 andDictionary:(id)arg3 ;
-(id)personForEmailFromContacts:(id)arg1 ;
-(id)personForPhoneFromContacts:(id)arg1 ;
-(id)friendHandlePretty;
-(id)friendEmail;
-(id)friendPhone;
-(id)friendHandle;
-(id)unformattedHandle;
-(UIImage *)cachedFriendImage;
-(void)setCachedFriendImage:(UIImage *)arg1 ;
@end

