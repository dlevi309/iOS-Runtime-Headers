/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMOutputAction.h>

@class NSString, NSURL;

@interface AXMSoundOutputAction : AXMOutputAction {

	NSString* _soundID;
	NSURL* _soundFileURL;

}

@property (nonatomic,readonly) NSURL * soundFileURL; 
@property (nonatomic,readonly) NSString * soundID; 
+(id)_soundFileURLForSoundID:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithSoundID:(id)arg1 ;
-(id)_initWithURL:(id)arg1 handle:(id)arg2 ;
-(id)_initWithSoundID:(id)arg1 handle:(id)arg2 ;
-(NSURL *)soundFileURL;
-(NSString *)soundID;
@end

