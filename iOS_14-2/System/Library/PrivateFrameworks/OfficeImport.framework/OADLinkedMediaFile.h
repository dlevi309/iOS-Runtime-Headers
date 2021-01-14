/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIsExternal:(BOOL)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)isExternal;
@end

