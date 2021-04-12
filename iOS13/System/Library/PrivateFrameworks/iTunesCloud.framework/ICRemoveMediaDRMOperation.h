/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class NSString, NSArray;

@interface ICRemoveMediaDRMOperation : ICRequestOperation {

	NSString* _mediaFilePath;
	NSArray* _sinfs;
	NSString* _newFileExtension;

}
-(void)execute;
-(id)initWithFilePath:(id)arg1 sinfs:(id)arg2 ;
-(void)removeDRMWithCompletionHandler:(/*^block*/id)arg1 ;
@end

