/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(BOOL)updating;
-(void)setUpdating:(BOOL)arg1 ;
-(BOOL)expired;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
-(void)expire;
-(void)setPicture:(UIImage *)arg1 ;
-(UIImage *)picture;
@end

