/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideo.h>

@protocol SVVideo <SVIdentifiable>
@property (nonatomic,readonly) unsigned long long videoType; 
@property (nonatomic,readonly) BOOL allowsCallToActionBar; 
@required
-(unsigned long long)videoType;
-(BOOL)allowsCallToActionBar;

@end


@class NSString;

@interface SVVideo : NSObject <SVVideo> {

	BOOL _allowsCallToActionBar;
	unsigned long long _videoType;
	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long videoType;              //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,readonly) BOOL allowsCallToActionBar;                //@synthesize allowsCallToActionBar=_allowsCallToActionBar - In the implementation block
-(NSString *)identifier;
-(unsigned long long)videoType;
-(BOOL)allowsCallToActionBar;
-(id)initWithVideoType:(unsigned long long)arg1 ;
@end

