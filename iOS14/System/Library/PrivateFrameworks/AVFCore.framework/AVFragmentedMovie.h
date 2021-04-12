/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVMovie.h>
#import <AVFCore/AVFragmentMinding.h>

@class NSArray;

@interface AVFragmentedMovie : AVMovie <AVFragmentMinding>

@property (nonatomic,readonly) NSArray * tracks; 
@property (getter=isAssociatedWithFragmentMinder,nonatomic,readonly) BOOL associatedWithFragmentMinder; 
+(BOOL)expectsPropertyRevisedNotifications;
-(NSArray *)tracks;
-(Class)_classForMovieTracks;
-(id)trackWithTrackID:(int)arg1 ;
-(BOOL)_mindsFragments;
-(id)tracksWithMediaType:(id)arg1 ;
-(BOOL)_needsLegacyChangeNotifications;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(BOOL)isAssociatedWithFragmentMinder;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
@end

