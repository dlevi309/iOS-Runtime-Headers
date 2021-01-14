/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSString, NSDate;

@interface IMAttachment : NSObject {

	NSString* _guid;
	NSString* _path;
	BOOL _isSticker;
	BOOL _isTransferComplete;
	NSDate* _createdDate;

}
-(id)guid;
-(id)path;
-(BOOL)isSticker;
-(id)description;
-(id)createdDate;
-(BOOL)isTransferComplete;
-(id)initWithPath:(id)arg1 guid:(id)arg2 ;
-(id)initWithPath:(id)arg1 guid:(id)arg2 createdDate:(id)arg3 isSticker:(BOOL)arg4 isTransferComplete:(BOOL)arg5 ;
-(id)fileTransfer;
@end

