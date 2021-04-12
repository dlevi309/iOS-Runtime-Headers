/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

