/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPServerObjectDatabaseAssetImportRequest.h>

@class NSString;

@interface MPServerObjectDatabaseSINFImportRequest : MPServerObjectDatabaseAssetImportRequest {

	id _requestPayload;
	NSString* _hashedPersonID;

}
-(BOOL)performWithDatabaseOperations:(id)arg1 error:(id*)arg2 ;
-(id)initWithPayload:(id)arg1 requestPayload:(id)arg2 hashedPersonID:(id)arg3 ;
@end

