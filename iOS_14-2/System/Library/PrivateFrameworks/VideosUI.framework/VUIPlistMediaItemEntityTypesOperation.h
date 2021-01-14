/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class VUIMediaItemEntityTypesFetchResponse, NSError, VUIPlistMediaDatabase;

@interface VUIPlistMediaItemEntityTypesOperation : VUIAsynchronousOperation {

	VUIMediaItemEntityTypesFetchResponse* _response;
	NSError* _error;
	VUIPlistMediaDatabase* _database;

}

@property (nonatomic,retain) VUIPlistMediaDatabase * database;                             //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                                //@synthesize error=_error - In the implementation block
-(void)setDatabase:(VUIPlistMediaDatabase *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(VUIMediaItemEntityTypesFetchResponse *)response;
-(void)setResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
-(VUIPlistMediaDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
@end

