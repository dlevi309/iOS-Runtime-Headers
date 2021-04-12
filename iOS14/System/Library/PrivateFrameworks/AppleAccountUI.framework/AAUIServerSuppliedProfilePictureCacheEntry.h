/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@class NSDate, UIImage, NSString;

@interface AAUIServerSuppliedProfilePictureCacheEntry : NSObject {

	NSDate* _expirationDate;
	BOOL _updating;
	UIImage* _picture;
	NSString* _serverCacheTag;

}

@property (nonatomic,retain) UIImage * picture;                    //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSString * serverCacheTag;              //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
@property (assign,nonatomic) BOOL updating;                        //@synthesize updating=_updating - In the implementation block
@property (nonatomic,readonly) BOOL expired; 
-(BOOL)updating;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
-(void)setUpdating:(BOOL)arg1 ;
-(id)description;
-(UIImage *)picture;
-(void)setPicture:(UIImage *)arg1 ;
-(BOOL)expired;
-(void)expire;
@end

