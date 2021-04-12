/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSError, NSString;

@interface MFDAFolderChangeResult : NSObject {

	long long _statusCode;
	NSError* _error;
	NSString* _folderID;
	NSString* _folderName;

}

@property (readonly) long long statusCode;               //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
@property (readonly) NSString * folderID;                //@synthesize folderID=_folderID - In the implementation block
@property (readonly) NSString * folderName;              //@synthesize folderName=_folderName - In the implementation block
-(NSString *)folderID;
-(NSError *)error;
-(long long)statusCode;
-(id)description;
-(id)initWithStatusCode:(long long)arg1 error:(id)arg2 folderID:(id)arg3 folderName:(id)arg4 ;
-(BOOL)wasSuccessful;
-(NSString *)folderName;
@end

