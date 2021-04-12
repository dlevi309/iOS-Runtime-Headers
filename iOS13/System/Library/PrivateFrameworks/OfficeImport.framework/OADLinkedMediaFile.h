/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADMovie.h>

@class NSURL;

@interface OADLinkedMediaFile : OADMovie {

	NSURL* mUrl;
	BOOL mIsExternal;

}

@property (retain) NSURL * url; 
@property (assign) BOOL isExternal; 
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)isExternal;
-(void)setIsExternal:(BOOL)arg1 ;
@end

