/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3Client.h>

@interface ML3ProcessClient : ML3Client
+(id)sharedProcessClient;
-(int)processID;
-(id)init;
-(id)name;
-(id)bundleID;
@end

