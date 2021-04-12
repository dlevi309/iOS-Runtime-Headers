/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithMediaItem:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)contentRating;
-(NSString *)adamID;
-(NSURL *)tvAppDeeplinkURL;
-(NSString *)previewURLString;
-(BOOL)isEntitledToPlay;
-(NSString *)extrasURLString;
-(NSString *)actionParams;
-(void)setActionParams:(NSString *)arg1 ;
-(NSString *)loadingImage;
-(BOOL)isLightTheme;
@end

