/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSDictionary, NSNumber, NSString, NSURL;

@interface VUIExtrasInfo : NSObject {

	NSDictionary* _extrasDict;

}

@property (nonatomic,readonly) NSNumber * contentRating; 
@property (nonatomic,readonly) NSString * adamID; 
@property (nonatomic,readonly) NSString * extrasURLString; 
@property (nonatomic,readonly) NSString * previewURLString; 
@property (nonatomic,retain) NSString * actionParams; 
@property (nonatomic,readonly) NSString * loadingImage; 
@property (nonatomic,readonly) BOOL isLightTheme; 
@property (nonatomic,readonly) NSURL * tvAppDeeplinkURL; 
@property (nonatomic,readonly) BOOL isEntitledToPlay; 
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)adamID;
-(id)initWithMediaItem:(id)arg1 ;
-(NSNumber *)contentRating;
-(NSString *)actionParams;
-(NSString *)previewURLString;
-(NSURL *)tvAppDeeplinkURL;
-(BOOL)isEntitledToPlay;
-(NSString *)extrasURLString;
-(void)setActionParams:(NSString *)arg1 ;
-(NSString *)loadingImage;
-(BOOL)isLightTheme;
@end

